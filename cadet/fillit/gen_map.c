/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 17:48:31 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/13 19:36:52 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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

