# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 16:56:27 by pnarayan          #+#    #+#              #
#    Updated: 2018/03/17 02:55:02 by pnarayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memalloc.c ft_memdel.c ft_memset.c ft_bzero.c ft_memcpy.c \
	  ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c

SRC += ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c \
	   ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
	   ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strclr.c ft_strdel.c \
	   ft_strequ.c ft_striter.c ft_striteri.c ft_strnequ.c ft_strnew.c \
	   ft_strjoin.c ft_strmap.c ft_strmapi.c ft_strsplit.c ft_strsub.c \
	   ft_strtrim.c ft_strlcpy.c ft_strrev.c ft_atoi.c ft_itoa.c

SRC += ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
	   ft_tolower.c ft_toupper.c ft_islower.c ft_isupper.c ft_isspace.c \
	   ft_ispunct.c

SRC += ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
	   ft_lstmap.c

SRC += ft_no_digits.c ft_swap.c ft_wordcount.c

SRC += ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
	   ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I. -c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
