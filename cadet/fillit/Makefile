# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/13 16:54:07 by pnarayan          #+#    #+#              #
#    Updated: 2018/04/15 23:50:32 by pnarayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

IDIR = ./include
CC = gcc
CFLAGS = -g -Wall -Werror -Wextra -Wunused -I $(IDIR)

_DEPS = fillit.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))

SDIR = ./src
_SRC = divide_pieces.c extract_coords.c gen_map.c list_functions.c \
	  square_root.c tet_solve.c validity_check.c validity_map.c main.c  
SRC = $(patsubst %, $(SDIR)/%, $(_SRC))

OBJ = $(SRC:.c=.o)
LIBS = ./libft/libft.a

all: libftcreate $(NAME)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ) $(LIBS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
	
libftcreate:
	@$(MAKE) -C ./libft

libftclean:
	@$(MAKE) clean -C ./libft

libftfclean:
	@$(MAKE) fclean -C ./libft

clean: libftclean
	rm -f $(OBJ)

fclean: clean libftfclean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
