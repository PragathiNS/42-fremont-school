/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 20:09:19 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/07 19:41:57 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *d;

	d = dest;
	while (*d != '\0')
		d++;
	while (n != '\0' && (*d = *src++) != '\0')
	{
		n--;
		d++;
	}
	if (*d != '\0')
		*d = '\0';
	return (dest);
}
