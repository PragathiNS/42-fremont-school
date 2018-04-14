/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 15:49:01 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/11 23:51:05 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_words(char const *s, char c, size_t *i)
{
	size_t		j;
	char		*str;
	size_t		cpy;

	j = 0;
	while (s[*i] == c && s[*i])
		(*i)++;
	cpy = *i;
	while (s[*i] != c && s[*i])
		(*i)++;
	if (!(str = ft_strnew(*i - cpy)))
		return (NULL);
	while (cpy < *i)
	{
		str[j] = s[cpy];
		j++;
		cpy++;
	}
	str[j] = '\0';
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**str;
	size_t		i;
	size_t		words;
	size_t		k;

	i = 0;
	words = 0;
	k = 0;
	if (!s || !c)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	i = 0;
	if (!(str = (char **)ft_memalloc(words + 1)))
		return (NULL);
	while (i < words)
		str[i++] = ft_words(s, c, &k);
	str[i] = 0;
	return (str);
}
