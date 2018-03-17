/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 23:27:17 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/17 02:42:04 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_word(const char *str, int i, char **res, char c)
{
	int	len;
	int	space;

	space = 0;
	len = 0;
	while (*str == c)
	{
		str++;
		space++;
	}
	while (str[len] && str[len] != c)
		len++;
	if (len > 0)
	{
		res[i] = ft_strnew(len);
		ft_strncpy(res[i], str, len);
	}
	return (space + len);
}

static int		count_words(const char *str, int i, char c)
{
	while (*str == c)
		str++;
	while (*str)
	{
		while (*str && *str != c)
			str++;
		while (*str == c)
			str++;
		i++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int			len;
	int			i;
	int			j;
	char		**res;

	if (s)
	{
		j = count_words(s, 0, c);
		len = 0;
		res = (char**)ft_memalloc((j + 1) * sizeof(char*));
		if (!res)
			return (NULL);
		i = 0;
		len = 0;
		while (*s)
		{
			len = find_word(s, i++, res, c);
			s += len;
		}
		res[j] = 0;
		return (res);
	}
	return (NULL);
}
