/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 17:43:20 by pnarayan          #+#    #+#             */
/*   Updated: 2018/05/06 18:47:50 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	get_next_line(const char fd, char **line)
{
	char	buff;
	int		i;
	char	*full_str;

	i = 0;
	while (read(fd, &buff, BUFFSIZE) > 0)
	{
		full_str[i] = buff;
		i++;
	}
	full_str[i] = '\0';
	close(fd);
	ft_putstr("printing gnl str\n");
	ft_putstr(full_str);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	**line;

	if (argc != 2)
	{
		ft_putstr("Enter the filename\n");
		return (1);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		ft_putstr("Calling gnl\n");
		get_next_line(fd, line);
	}
	return (0);
}
