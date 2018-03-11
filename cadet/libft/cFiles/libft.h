/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:06:18 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/27 20:23:57 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 * Memory block structure
 */

typedef struct s_block *t_block;

struct s_block
{
	size_t	size;
	t_block	next;
	int	free;
};

/*
 * Basic Memory Functions
 */

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *ds, const void *sr, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *ds, const void *sr, size_t len);
int	ft_memcmp(const void *s1, const void *s2, size_t n);


/*
 * Basic String Functions
 */

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strlcat(char *s1, const char *s2, size_t len);

/*
 * Ascii functions
 */

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isspace(int c);
int		ft_ispunct(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*
 * Part - 2 
 */

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);

char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strequ(char const *s1, char const *s2);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);

char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char	const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
