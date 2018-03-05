/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:40:39 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/27 20:01:25 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		diff;
	const unsigned char *us1;
	const unsigned char *us2;

	us1 = (const unsigned char*) s1;
	us2 = (const unsigned char*) s2;
	// If they are empty
	diff = 0;
	// If they are not identical then if is entered
	while (n-- != 0)
	{
		if (*us1 != *us2)
		{
			diff = (int) *us1 - *us2;
			break;
		}
		us1++;
		us2++;
	}
	// If they are identical
	return (diff);
}

int main(void)
{
	char *s1 = "Pragathi";
	char *s2 = "Pragathy";

	printf("%d\n", ft_memcmp(s1, s2, 8));
	printf("%d\n", memcmp(s1, s2, 8)); 

	return (0);
}
