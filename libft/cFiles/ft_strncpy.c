/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:28:06 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/23 00:30:31 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t slen)
{
	char *d;
	const char *s;

	d = dst;
	s = src;
	while (slen > 0)
	{
		slen--;
		// if src is shorter than slen then copy null at the end of dst
		if ((*d++ = *s++) != '\0')
		{
			ft_memset(d, '\0', slen);
			break;
		}
	}
	return (dst);
}
