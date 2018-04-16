/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:52:40 by pnarayan          #+#    #+#             */
/*   Updated: 2018/04/16 05:18:52 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../libft/libft.h"
#define BUFFSIZE 546
#define	ARR_SIZE 4
#define TET_SIZE 20
#define VALID_SHRP 4

typedef struct		s_map
{
	int				size;
	char			**map;
}					t_map;

typedef struct		s_tetris
{
	char			tet_id;
	int				pieces[8];
	struct s_tetris	*next;
}					t_tetris;

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;
/*
 * List of tetris
 */
void				display_list(t_tetris **tetris);
t_tetris			*ft_create_piece(int *co, int x, int y, int tet_id);
void				ft_add_piece(t_tetris **tetris, int *co, int tet_id);
int					list_count(t_tetris **tetrisList);
void				free_tetris(t_tetris **tetris);

/*
 * Validity
 */
int					valid_newlines(char *str);
int     			valid_shape(char **str);
int     			valid_piece(char **str);

/*
 * Extracting
 */
int					conv_2d(t_tetris **tet_list, char *str, int tet_id);
int					divide_pieces(char *f_str);
int					div_conv(t_tetris **tet_list, char *tet_str);
void				extract_tet(t_tetris **tet_list, char **arr, int tet_id);
int					read_file(char *filename);

/*
 * Solving
 */
void				solve_map(t_tetris **tet_list);
t_map				*gen_map(int size);
int 				square_root(int n);
int					place_if_valid(t_point point, t_map *map, t_tetris *curr);
int					solve_tet(t_map *map, t_tetris **tetlist);
void				print_map(t_map *map);
void				clear_piece(t_tetris *curr, t_map *map, t_point point, char c);

#endif
