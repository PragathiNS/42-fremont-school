/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 17:43:20 by pnarayan          #+#    #+#             */
/*   Updated: 2018/05/06 21:39:22 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	char	buff;
	int		i;
	int		j;
	char	*full_str;
	int		n_count;

	i = 0;
	n_count = 0;
	if (fd < 0 || line == NULL )//|| read(fd, &buff, BUFFSIZE) <= 0)
		return (-1);
	while (read(fd, &buff, BUFFSIZE) > 0)
	{
		full_str[i] = buff;
		i++;
		if (full_str[i - 1] == '\n')
		{
			n_count++;
			//ft_strncpy(*line, full_str, ft_strlen(full_str));
			full_str[i] = '\0';
			i = 0;
			ft_putstr(full_str);
			return (1);
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc != 2)
	{
		ft_putstr("Enter the filename\n");
		return (1);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		get_next_line(fd, &line);
		get_next_line(fd, &line);
		get_next_line(fd, &line);
		get_next_line(fd, &line);
		get_next_line(fd, &line);
		close(fd);
	}
	return (0);
}
