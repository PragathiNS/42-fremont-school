/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:17:38 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/16 00:57:36 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		solve_tet(t_map *map, t_tetris **tetlist)
{
	int			x;
	int			y;
	t_tetris	*curr;

	x = 0;
	curr = *tetlist;
	if (curr == NULL)
		return (1);
	while (x < map->size)
	{
		y = 0;
		while (y < map->size)
		{
			if (place_if_valid(x, y, map, curr))
			{
				if (solve_tet(map, &(curr->next)))
                    return(1);
                else
					clear_piece(curr, map, x, y);
			}
			y++;
		}
		x++;
	}
	return (0);
}
