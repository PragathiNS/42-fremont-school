/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 17:48:31 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/16 05:19:48 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

/*
 * Generates the map of the passed size
 */
t_map	*gen_map(int size)
{
	t_map	*map;
	int        i;
	int        j;

	map = (t_map *)ft_memalloc(sizeof(t_map));
	map->size = size;
	map->map = (char **)ft_memalloc(sizeof(char *) * size);
	i = 0;
	while (i < size)
	{
		map->map[i] = ft_strnew(size);
		j = 0;
		while (j < size)
		{
			map->map[i][j] = '.';
			j++;
		}
		i++;
	}
	return (map);
}

/*
 * Prints the map
 */
void	print_map(t_map *map)
{
	int		ii;
	int		j;

	ii = 0;
	while (ii < map->size)
	{
		j = 0;
		while (j < map->size)
			ft_putchar(map->map[ii][j++]);
		ft_putchar('\n');
		ii++;
	}
}

/*
 * Returns the floor(sqrt()) of the number which will be used as the map_size
 */
int square_root(int n)
{
	int		size;

	size = 2;
	while (size * size < n)
		size++;
	return (size);
}

/*
 * Controller for calling functions that generates the map based on the size,
 * calls the backtracking algorithm to solve the tetris, prints the map and then
 * frees it
 */
void	solve_map(t_tetris **tet_list)
{
	int		map_sz;
	t_map	*map;

	map_sz = square_root(list_count(tet_list) * 4);
	map = gen_map(map_sz);
	while (!(solve_tet(map, tet_list)))
	{
		map_sz++;
		free(map);
		map = gen_map(map_sz);
	}
	print_map(map);
	free(map);
}
