# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/13 16:54:07 by pnarayan          #+#    #+#              #
#    Updated: 2018/04/14 00:38:23 by pnarayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = divide_pieces.c extract_coords.c gen_map.c list_functions.c \
	  square_root.c tet_solve.c validity_check.c validity_map.c main.c  

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -Wunused

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) libft/libft.a

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
