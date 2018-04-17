/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_coords.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 01:19:55 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/16 22:00:36 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

/*
** Extracts the coordinates of the '#' characters in the current tetromino
*/

void	extract_tet(t_tetris **tet_list, char **arr, int tet_id)
{
	int			x;
	int			i;
	int			j;
	int			coords[8];

	i = 0;
	x = 0;
	while (i < ARR_SIZE)
	{
		j = 0;
		while (j < ARR_SIZE)
		{
			if (arr[i][j] == '#')
			{
				coords[x++] = i;
				coords[x++] = j;
			}
			j++;
		}
		i++;
	}
	ft_add_piece(tet_list, coords, tet_id);
}
