/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 23:45:59 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/11 00:22:15 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char *str)
{
	int		i;
	int		word_count;
	int		start;

	i = 0;
	word_count = 0;
	start = 1;
	while (str[i] != '\0')
	{
		if (!ft_isspace(str[i]))
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
