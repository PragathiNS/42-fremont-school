/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 14:20:24 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/03 16:33:05 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int		client_socket;
	int		n;
	char	recv_buff[1024];
	struct	sockaddr_in serv_addr;

	n = 0;
	/* Socket creation */
	if ((client_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0)
	{
		printf("socket creation failed\n");
		return (1);
	}

	/* Assigning the values for the structure */
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(9000);
	serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

	/* Connect to the server */
	if (connect(client_socket, (struct sockaddr *) &serv_addr , sizeof(serv_addr)) < 0)
	{
		printf("Connection failed\n");
		return (1);
	}

	while ((n = read(client_socket, recv_buff, sizeof(recv_buff) - 1)) > 0)
	{
		recv_buff[n] = 0;
		if (fputs(recv_buff, stdout) == EOF)
		{
			printf("Fputs error\n");
		}
	}
	if (n < 0)
	{
		printf("Read Error\n");
	}
	return (0);
}
