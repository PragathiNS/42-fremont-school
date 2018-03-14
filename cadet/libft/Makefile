# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 16:56:27 by pnarayan          #+#    #+#              #
#    Updated: 2018/03/14 00:28:20 by pnarayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memalloc.c ft_memdel.c ft_memset.c ft_bzero.c ft_memcpy.c \
	  ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c

SRC += ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c \
	   ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
	   ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strclr.c ft_strdel.c \
	   ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strmap.c \
	   ft_strmapi.c ft_strnequ.c ft_strnew.c ft_strsplit.c ft_strsub.c \
	   ft_strtrim.c ft_atoi.c ft_itoa.c

SRC += ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
	   ft_tolower.c ft_toupper.c

SRC += ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
	   ft_lstmap.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm/ -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
