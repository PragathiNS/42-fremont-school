# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    hind_final.py                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/09 21:19:47 by pnarayan          #+#    #+#              #
#    Updated: 2018/03/09 23:10:31 by pnarayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys
import os
import requests
import simplejson as json

base_url = "https://api.intra.42.fr"
crendentials = [
        'grant_type=client_credentials',
        'client_id=' + os.environ["API_UID"],
        'client_secret=' + os.environ["API_SECRET"]
        ]
status = requests.post(base_url + "/oauth/token?%s" % ("&".join(crendentials)))
response = status.json()
if status.status_code == 200:
    print ("API connected")
else:
    print ("Authentication failed with 42 API")

def find_location(user_id, response):
    options = [
            'access_token=%s' % (response['access_token']),
            'token_type=bearer',
            'filter[active]=true'
            ]
    if user_id != "":
        status = requests.get(base_url + "/v2/users/" + user_id + "/locations?%s" % ("&".join(options)))
        response = status.json()
        if len(response) > 0:
            print (user_id + " is at " + response[0]['host'] + " desktop.")
        else:
            if status.status_code == 200:
                print (user_id + " is not available right now.")
            else:
                print (user_id + " is not a student of 42.")
    else:
        print ("Empty user_id")

if len(sys.argv) > 1:
    filename = sys.argv[1]
    with open(filename) as login_file:
        user = login_file.readlines()
        for user_id in user:
            find_location(user_id.strip(), response)
