/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_words_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 00:21:29 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/11 00:21:35 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_no_words_c(char *str, char c)
{
	int		i;
	int		word_count;
	int		start;

	i = 0;
	word_count = 0;
	start = 1;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			if (start)
			{
				word_count++;
				start = 0;
			}
		}
		else
			start = 1;
		i++;
	}
	return (word_count);
}
