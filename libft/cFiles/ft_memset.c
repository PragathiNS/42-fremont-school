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
	return (b);
}
