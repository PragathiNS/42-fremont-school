/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 21:15:42 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/17 01:57:21 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	char			*str;
	unsigned int	count;

	if (!(new = ft_strnew(len)) || !s)
		return (NULL);
	str = (char*)s;
	count = 0;
	while (count < len)
	{
		new[count] = str[start];
		start++;
		count++;
	}
	return (new);
}
