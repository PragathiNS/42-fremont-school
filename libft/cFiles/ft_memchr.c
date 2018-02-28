/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 18:41:30 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/27 20:01:30 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char uc;
	char *cs;

	uc = (unsigned char) c;
	cs = (char *)s;
	while (n-- != 0)
	{
		if (*cs == uc)
			return ((void *)cs);
		cs++;
	}
	return (NULL);
}

int main(void)
{
	char *s = "Pragathi";

	printf("%s\n", ft_memchr(s, 's', 7));
	printf("%s\n", memchr(s, 's', 7)); 

	return (0);
}
