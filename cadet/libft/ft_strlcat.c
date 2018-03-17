/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 20:09:51 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/07 19:40:39 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	char	*d;

	d = ft_memchr(dest, '\0', size);
	if (d == NULL)
		d = dest + size;
	len = d - dest;
	return (len + ft_strlcpy(d, src, size - len));
}
