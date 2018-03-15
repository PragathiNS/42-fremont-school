/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 15:47:18 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/15 01:23:40 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_wc(char *str)
{
	int		i;
	int		word_count;
	int		word_start;

	i = 0;
	word_count = 0;
	word_start = 1;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			if (word_start)
			{
				word_count++;
				word_start = 0;
			}
		}
		else
			word_start = 1;
		i++;
	}
	return (word_count);
}

static	int		ft_cc(char *str, int i)
{
	int		char_count;

	char_count = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		char_count++;
		i++;
	}
	return (char_count);
}

char	**ft_split_whitespaces(char *s)
{
	int		i;
	int		j;
	int		k;
	char	**w;

	if ((w = (char**)malloc(sizeof(char*) * (ft_wc(s) + 1))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == '\t' || s[i] == ' ' || s[i] == '\n') && s[i])
			i++;
		if (s[i])
		{
			k = 0;
			if ((w[j] = (char*)malloc(sizeof(char) * ft_cc(s, i) + 1)) == NULL)
				return (NULL);
			while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
				w[j][k++] = s[i++];
			w[j++][k] = '\0';
		}
	}
	w[j] = NULL;
	return (w);
}
