/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:46:07 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/07 19:54:09 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *ds, const void *sr, size_t len)
{
	char		*dst;
	const char	*src;

	dst = ds;
	src = sr;
	if (src < dst && dst < src + len)
	{
		src += len;
		dst += len;
		while (len-- != 0)
			*--dst == *--src;
	}
	else
	{
		while (n-- != 0)
			*dst++ = *src++;
	}
	return (ds);
}
