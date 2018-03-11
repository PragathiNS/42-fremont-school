/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:23:12 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/26 18:03:14 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *x_set;

	x_set = (unsigned char *)s;
	while (*x_set && n > 0)
	{
		*x_set = 0;
		x_set++;
		n--;
	}
	printf("%lu -> sizeof(x_set)\n", sizeof(x_set));
	printf("%s -> x_set\n", x_set); 
}


int main()
{
	//char str[]  = "This is first trial of memset";
	char str[] = "faew";

	ft_bzero(str, 2);
	puts(str);
	ft_bzero(str, 5);
	puts(str);
	ft_bzero(str, 0);
	puts(str);

	char s[] = "This";

	bzero(s, 2);
	puts(s);
	bzero(s, 5);
	puts(s);
	bzero(s, 0);
	puts(s);

	return (0);
}
