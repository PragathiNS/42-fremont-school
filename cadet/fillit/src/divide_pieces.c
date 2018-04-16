/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_pieces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 00:32:37 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/16 02:53:24 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		conv_2d(t_tetris **tet_list, char *str, int tet_id)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	arr = (char **)ft_memalloc(sizeof(char *) * 4);
	while (i < 4)
	{
		arr[i] = (char *)ft_memalloc(5);
		j = 0;
		while (j < 5)
			arr[i][j++] = str[k++];
		i++;
	}
	if (valid_piece(arr))
	{
		extract_tet(tet_list, arr, tet_id);
		return (1);
	}
	return (0);
}

int		div_conv(t_tetris **tet_list, char *f_str)// int *tet_id)
{
	char		*piece_str;
	size_t		i;
	int			j;
	int			tet_id;

	i = 0;
	tet_id = 0;
	piece_str = (char *)ft_memalloc(21);
	while (i < ft_strlen(f_str))
	{
		ft_bzero(piece_str, sizeof(char *));
		j = 0;
		while (j < 20)
			piece_str[j++] = f_str[i++];
		piece_str[j] = '\0';
		tet_id++;
		//(*tet_id)++;
		i++;
		//ft_putstr(piece_str);
		if (!conv_2d(tet_list, piece_str, tet_id))
			return (0);
	}
	return (1);
}

int		divide_pieces(char *f_str)
{
	t_tetris	*tet_list;
	//t_map		*map;
	//int			map_sz;
	//int			tet_id;
	
	//tet_id = 0;
	tet_list = NULL;
	if (!f_str || !valid_newlines(f_str))
		return (0);
	if (!div_conv(&tet_list, f_str))//&tet_id))
		return (0);	
	solve_map(&tet_list);
	return (1);
}