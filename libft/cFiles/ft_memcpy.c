/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:03:56 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/27 17:55:04 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *ds, const void *sr, size_t n)
{
	size_t	i;
	char *dst = (char *)ds;
	char *src = (char *)sr;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ds);
}

int main()
{
	char d[14];
	const char s[] = "This is a test";

	printf("Before memcpy = %s\n", d);
	ft_memcpy(d, s, 10);
	printf("After memcpy = %s\n", d);

	char d1[14];
	const char s1[] = "This is a test";

	printf("Before memcpy = %s\n", d1);
	memcpy(d1, s1, 10);
	printf("After memcpy = %s\n", d1);

	return (0);
}
