/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 05:51:56 by pnarayan          #+#    #+#             */
/*   Updated: 2018/05/17 01:01:55 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		new_line(char **s, char **line, int fd, int ret)
{
	char	*tmp;
	int		len;

	len = 0;
	while (s[fd][len] != '\n' && s[fd][len] != '\0')
		len++;
	if (s[fd][len] == '\n')
	{
		*line = ft_strsub(s[fd], 0, len);
		tmp = ft_strdup(s[fd] + len + 1);
		free(s[fd]);
		s[fd] = tmp;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	else if (s[fd][len] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*s_str[255];
	char		buff[BUFF_SIZE + 1];
	int			ret;
	char		*full_str;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (s_str[fd] == NULL)
			s_str[fd] = ft_strnew(1);
		full_str = ft_strjoin(s_str[fd], buff);
		free(s_str[fd]);
		s_str[fd] = full_str;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	if (ret == 0 && (s_str[fd] == NULL || s_str[fd][0] == '\0'))
		return (0);
	return (new_line(s_str, line, fd, ret));
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
