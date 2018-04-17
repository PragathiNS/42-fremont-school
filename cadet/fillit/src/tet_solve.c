/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:17:38 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/16 22:02:05 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

/*
** Backtracking algorithm to solve tetris
*/

int		solve_tet(t_map *map, t_tetris **tetlist)
{
	t_point		point;
	t_tetris	*curr;

	point.x = 0;
	curr = *tetlist;
	if (curr == NULL)
		return (1);
	while (point.x < map->size)
	{
		point.y = 0;
		while (point.y < map->size)
		{
			if (place_if_valid(point, map, curr))
			{
				if (solve_tet(map, &(curr->next)))
					return (1);
				else
					fill_map(curr, map, point, '.');
			}
			point.y++;
		}
		point.x++;
	}
	return (0);
}
