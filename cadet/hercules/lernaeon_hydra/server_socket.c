/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_socket.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 13:42:11 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/03 16:30:23 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <arpa/inet.h>

int main()
{
	int		listen_socket;
	int		data_socket;
	int		queuelimit;
	struct	sockaddr_in sock_addr;

	queuelimit = 10;
	/* Socket creation */
	if ((listen_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0)
	{
		printf("socket creation failed\n");
		return (1);
	}

	/* Assigning the values for the structure */
	sock_addr.sin_family = AF_INET;
	sock_addr.sin_port = htons(9000);
	sock_addr.sin_addr.s_addr = htonl(INADDR_ANY);

	/* Bind the port with the socket address */
	if (bind(listen_socket, (struct sockaddr *)&sock_addr, sizeof(sock_addr)) < 0)
		printf("Assigning address to socket failed\n");

	/* Listen for the connections */
	if (listen(listen_socket, queuelimit) < 0)
	{
		printf("Listening failed\n");
		return (1);
	}
	printf("Listening...\n");

	while (1)
	{
		/* Accepting the incoming connection */
		data_socket = accept(listen_socket, (struct sockaddr *) NULL, NULL);
		write(data_socket, "Pong\nPong\n", strlen("Pong\nPong\n"));

		/* Socket close */
		close(data_socket);
		sleep(1);
	}
	return (0);
}
