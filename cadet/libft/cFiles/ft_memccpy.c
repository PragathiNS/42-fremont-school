/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:12:30 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/07 19:57:49 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *ds, const void *sr, int c, size_t n)
{
	size_t			i;
	unsigned char	c_uc;
	char			*dst;
	const char		*src;

	dst = ds;
	src = sr;
	i = 0;
	c_uc = (unsigned char)c;
	while (n-- != 0)
	{
		if (src[i] == c_uc)
		{
			dst[i] = src[i];
			i++;
			break ;
		}
		dst[i] = src[i];
		i++;
	}
	return (ds);
}
