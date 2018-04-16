/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 01:04:46 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/16 04:41:53 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

/*
 * Checks for newlines in between tetrominos, beginning and end of the file
 */
int		valid_newlines(char *str)
{
	if (str[0] == '\n' || (str[ft_strlen(str) - 2] == '\n' &&
				str[ft_strlen(str) - 1] == '\n'))
		return (0);
	return (1);
}

/*
 * Checks for the valid tetromino shape
 */
int     valid_shape(char **str)
{
	int     connect;
	int		x;
	int		y;

	x = 0;
	y = 0;
	connect = 0;
	while (y < ARR_SIZE)
	{
		x = 0;
		while (x < ARR_SIZE)
		{
			if (str[y][x] == '#')
			{
				if (y != 3 && (str[y + 1][x] == '#'))
					connect++;
				if (x != 3 && (str[y][x + 1] == '#'))
					connect++;
			}
			x++;
		}
		y++;
	}
	return (connect > 2);
}

/*
 * Checks for the valid characters ('.' or '#'), no of '#' in a tetrimino and
 * '\n' at the end of each row
 */
int     valid_piece(char **str)
{
	int     shrp_cnt;
	int		x;
	int		y;

	shrp_cnt = 0;
	y = 0;
	while (y < ARR_SIZE)
	{
		x = 0;
		while (x < ARR_SIZE)
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
	return ((shrp_cnt == VALID_SHRP) && valid_shape(str));
}
