/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:40:39 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/07 19:54:53 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					diff;
	const unsigned char	*us1;
	const unsigned char	*us2;

	us1 = (const unsigned char*)s1;
	us2 = (const unsigned char*)s2;
	diff = 0;
	while (n-- != 0)
	{
		if (*us1 != *us2)
		{
			diff = (int)*us1 - *us2;
			break ;
		}
		us1++;
		us2++;
	}
	return (diff);
}
