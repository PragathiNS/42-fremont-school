/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:06:02 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/26 18:53:29 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *b_set;

	b_set = (unsigned char *)b;
	if (b == NULL)
		return (NULL);
	while (*b_set && len > 0)
	{
		*b_set = c;
		b_set++;
		len--;
	}
	printf("%lu -> sizeof(b_set)\n", sizeof(b_set)); 
	printf("%lu -> sizeof(len)\n", sizeof(len)); 
	printf("%lu -> sizeof(c)\n", sizeof(c)); 
	return (b);
}

int main()
{
	//char str[]  = "This is first trial of memset";
	char str[] = "faew";

	ft_memset(str, 2, 10);
	puts(str);

	memset(str, '#', 5);
	puts(str);

	return (0);
}
