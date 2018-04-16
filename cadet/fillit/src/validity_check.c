/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 01:04:46 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/15 23:31:15 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		valid_newlines(char *str)
{
	if (str[0] == '\n' || (str[ft_strlen(str) - 2] == '\n' &&
				str[ft_strlen(str) - 1] == '\n'))
		return (0);
	return (1);
}

int     valid_shape(char **str)
{
	int     connect;
	int		x;
	int		y;

	x = 0;
	y = 0;
	connect = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (str[y][x] == '#')
			{
				if (y != 3)
					if (str[y + 1][x] == '#')
						connect++;
				if (x != 3)
					if (str[y][x + 1] == '#')
						connect++;
			}
			x++;
		}
		y++;
	}
	if (connect > 2)
		return(1);
	return(0);
}

int     valid_piece(char **str)
{
	int     shrp_cnt;
	int		x;
	int		y;

	shrp_cnt = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (str[y][x] == '.')
				x++;
			else if (str[y][x] == '#')
			{
				x++;
				shrp_cnt++;
			}
			else
				return (0);
		}
		if (str[y][x] == '\n')
			y++;
		else
			return (0);
	}
	if ((shrp_cnt == 4) && valid_shape(str))
		return (1);
	return (0);
}
