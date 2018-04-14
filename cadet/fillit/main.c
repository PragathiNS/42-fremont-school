/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:47:36 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/14 00:51:51 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		read_file(char *filename)
{
	int		fd;
	int		ret;
	char	buff[BUFFSIZE + 1];
	char	*full_str;

	if ((fd = open(filename, O_RDONLY)) == -1)
		return (0);
	while ((ret = read(fd, buff, BUFFSIZE)))
	{
		if (ret > 545)
			return (0);
		if ((full_str = (char *)ft_memalloc(ret + 1)) != NULL)
			ft_strncpy(full_str, buff, ret);
		full_str[ret] = '\0';
	}
	close(fd);
	if (!divide_pieces(full_str))
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Usage:./fillit [test_file]\n");
		return (1);
	}
	else
	{
		if (!read_file(argv[1]))
		{
			ft_putstr("error\n");
			return (1);
		}
	}
	return (0);
}
