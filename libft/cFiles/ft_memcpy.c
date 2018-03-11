/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:03:56 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/07 19:52:58 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *ds, const void *sr, size_t n)
{
	char		*dst;
	const char	*src;

	dst = ds;
	src = sr;
	while (n-- != 0)
		*dst++ = *src++;
	return (ds);
}
