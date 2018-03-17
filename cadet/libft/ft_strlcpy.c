/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 19:41:08 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/07 19:41:26 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size-- == 0)
		return (srclen);
	len = (size < srclen) ? size : srclen;
	ft_memmove(dest, src, len);
	dest[len] = '\0';
	return (srclen);
}
