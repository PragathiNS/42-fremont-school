/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:46:07 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/27 18:40:36 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *ds, const void *sr, size_t len)
{
	size_t	i;
	char *dst = (char *)ds;
	char *src = (char *)sr;

	printf("%s\n", dst);
	printf("%s\n", src);

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ds);
}

int main()
{
	char *s = "Hello Prags";

	printf("Before memcpy = %s\n", s);
	ft_memmove((char *)s + 1, s + 3, 5);
	printf("After memcpy = %s\n", s);

	char *s1;
   //	= "Hello Prags";

	s1 = "Hello Prags";

	printf("Before memcpy = %s\n", s1);
	printf("After memcpy = %s\n", memmove(s1 + 3, s1, 5));

	return (0);
}
