/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:09:24 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/16 01:59:38 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		place_if_valid(int x, int y, t_map *map, t_tetris *curr)
{
	int		dot_cnt;
	int		i;
	int		ii;
	int		jj;

	dot_cnt = 0;
	i = 0;
	while (i < 7)
	{
		ii = x + curr->pieces[i];
		jj = y + curr->pieces[i + 1];
		if (ii >= map->size || jj >= map->size)
			return (0);
		else if (map->map[ii][jj] == '.')
		{
			i += 2;
			dot_cnt++;
		}
		else
			return (0);
	}
	if (dot_cnt == 4)
	{
		i = 0;
		while (i < 7)
		{
			ii = x + curr->pieces[i];
			jj = y + curr->pieces[i + 1];
			map->map[ii][jj] = curr->tet_id;
			i += 2;
		}
		/*print_map(map);
		ft_putchar('\n');*/
		return (1);
	}
	return (0);
}

void	clear_piece(t_tetris *curr, t_map *map, int x, int y)
{
	int		i;
	int		ii;
	int		jj;

	i = 0;
	while (i < 7)
	{
		ii = x + curr->pieces[i];
		jj = y + curr->pieces[i + 1];
		map->map[ii][jj] = '.';
		i += 2;
	}
	/*print_map(map);
	ft_putchar('\n');*/
}
