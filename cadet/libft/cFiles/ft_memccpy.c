/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:12:30 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/17 02:50:10 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *ds, const void *sr, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;
	unsigned char	a;

	i = 0;
	dst = (unsigned char*)ds;
	src = (unsigned char*)sr;
	a = (unsigned char)c;
	while (i < n)
	{
		if ((dst[i] = src[i]) == a)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
