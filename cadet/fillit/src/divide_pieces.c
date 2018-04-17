/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_pieces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 00:32:37 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/16 21:46:34 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

/*
** Converts 1D char array to 2D char array, calls the validity functions on the
** array and if valid then calls the extract_coords
*/

int		conv_2d(t_tetris **tet_list, char *str, int tet_id)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	arr = (char **)ft_memalloc(sizeof(char *) * ARR_SIZE);
	while (i < ARR_SIZE)
	{
		arr[i] = (char *)ft_memalloc(ARR_SIZE + 1);
		j = 0;
		while (j < ARR_SIZE + 1)
			arr[i][j++] = str[k++];
		i++;
	}
	if (!valid_piece(arr))
		return (0);
	extract_tet(tet_list, arr, tet_id);
	ft_memdel((void **)arr);
	return (1);
}

/*
** Divides the full string into single tetrominos and calls conv_2d
*/

int		div_conv(t_tetris **tet_list, char *f_str)
{
	char		*piece_str;
	size_t		i;
	int			j;
	int			tet_id;

	i = 0;
	tet_id = 0;
	piece_str = (char *)ft_memalloc(TET_SIZE + 1);
	while (i < ft_strlen(f_str))
	{
		ft_bzero(piece_str, sizeof(char *));
		j = 0;
		while (j < TET_SIZE)
			piece_str[j++] = f_str[i++];
		piece_str[j] = '\0';
		tet_id++;
		i++;
		if (!conv_2d(tet_list, piece_str, tet_id))
			return (0);
	}
	return (1);
}

/*
** Calls for initial newline checks on the full string and calls the required
** functions to convert the file into list of tetris piece and calls solve_map
** function
*/

int		divide_pieces(char *f_str)
{
	t_tetris	*tet_list;

	tet_list = NULL;
	if (!f_str || !valid_newlines(f_str))
		return (0);
	if (!div_conv(&tet_list, f_str))
		return (0);
	solve_map(&tet_list);
	free_tetris(&tet_list);
	return (1);
}
