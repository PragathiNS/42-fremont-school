/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:12:30 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/27 17:44:43 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *ds, const void *sr, int c, size_t n)
{
	size_t	i;
	unsigned char c_uc;
	char *dst = ds;
	const char *src = sr;

	i = 0;
	c_uc = (unsigned char) c;
	while (n-- != 0)
	{
		if (src[i] == c_uc)
		{
			dst[i] = src[i];
			i++;
			break;	
		}
		dst[i] = src[i];
		i++;
	}
	return (ds);
}

int main()
{
	char d[14];
	const char s[] = "This i2 a test";

	printf("Before memcpy = %s\n", d);
	ft_memccpy(d, s, 'e', 14);
	printf("After memcpy = %s\n", d);

	char d1[14];
	const char s1[] = "This i2 a test";

	printf("Before memcpy = %s\n", d1);
	memccpy(d1, s1, 'e', 14);
	printf("After memcpy = %s\n", d1);

	return (0);
}
