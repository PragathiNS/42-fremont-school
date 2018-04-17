/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 04:38:38 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/16 21:59:38 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

/*
** Returns the total number of tetrominos in the list
*/

int			list_count(t_tetris **tetrislist)
{
	t_tetris	*tetris;
	int			count;

	count = 0;
	tetris = *tetrislist;
	if (tetris != NULL)
	{
		while (tetris)
		{
			count++;
			tetris = tetris->next;
		}
	}
	return (count);
}

/*
** Creates a tetromino node in the list by filling in the structure t_tetris
*/

t_tetris	*ft_create_piece(int *coords, int x, int y, int tet_id)
{
	t_tetris	*one_piece;
	int			co;
	int			i;

	co = 0;
	i = 0;
	one_piece = (t_tetris *)ft_memalloc(sizeof(t_tetris));
	ft_bzero(one_piece, sizeof(t_tetris));
	if (one_piece)
	{
		while (co < 8)
		{
			one_piece->pieces[i++] = coords[co++] - x;
			one_piece->pieces[i++] = coords[co++] - y;
		}
		one_piece->tet_id = tet_id + 'A' - 1;
		one_piece->next = NULL;
	}
	return (one_piece);
}

/*
** Adds the current tetromino to the t_tetris list
*/

void		ft_add_piece(t_tetris **tetris, int *co, int tet_id)
{
	t_tetris	*piece;
	int			x;
	int			y;

	piece = *tetris;
	x = co[0];
	y = co[1];
	if (piece != NULL)
	{
		while (piece->next != NULL)
			piece = piece->next;
		piece->next = ft_create_piece(co, x, y, tet_id);
	}
	else
		*tetris = ft_create_piece(co, x, y, tet_id);
}

/*
** Frees the memory allocated by the list of tetrominos
*/

void		free_tetris(t_tetris **tetris)
{
	t_tetris	*tet;
	t_tetris	*tmp;

	tet = *tetris;
	while (tet != NULL)
	{
		tmp = tet;
		tet = tet->next;
		free(tmp);
	}
}
