/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 05:51:48 by pnarayan          #+#    #+#             */
/*   Updated: 2018/05/06 21:28:33 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "../libft/libft.h"
#define BUFFSIZE 1

int		get_next_line(const int fd, char **line);

#endif
