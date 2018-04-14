/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 06:11:00 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/11 23:57:28 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		ch;
	unsigned char		*s1;
	const unsigned char	*s2;

	i = 0;
	ch = (unsigned char)c;
	s1 = (unsigned char *)dst;
	s2 = (const unsigned char *)src;
	while (i < n)
	{
		if ((s1[i] = s2[i]) == ch)
			return (s1 + i + 1);
		i++;
	}
	return (NULL);
}
