/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 23:27:17 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/11 00:25:18 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**words;

	if ((words = (char**)ft_memalloc(sizeof(char*) * (ft_no_words_c(s) + 1))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			k = 0;
			if ((words[j] = (char*)ft_memalloc(sizeof(char) * ft_no_chars(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != c)
				words[j][k++] = str[i++];
			words[j++][k] = '\0';
		}
	}
	words[j] = NULL;
	return (words);
}				
