/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 23:27:17 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/14 21:09:16 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**words;

	i = 0;
	j = 0;
	if ((words = (char**)ft_memalloc(sizeof(char*) *
					(ft_no_words_c(s, c) + 1))) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			k = 0;
			if ((words[j] = (char*)ft_memalloc(sizeof(char) *
							ft_no_chars(s, i) + 1)) == NULL)
				return (NULL);
			while (s[i] != c)
				words[j][k++] = s[i++];
			words[j++][k] = '\0';
		}
	}
	words[j] = NULL;
	return (words);
}
