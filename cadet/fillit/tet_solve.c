/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:17:38 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/14 01:38:43 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
				if (!curr->next)
					return (1);
				curr = curr->next;
				return (solve_tet(map, &curr));
			}
			y++;
		}
		x++;
	}
	// Change the order of the pieces and then return zero if those pieces don't
	// fit
	
	return (0);
}
