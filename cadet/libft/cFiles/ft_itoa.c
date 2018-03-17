/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 00:25:32 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/17 02:51:08 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*s;
	size_t			len;
	unsigned int	n_c;

	len = ft_no_digits(n);
	n_c = n;
	if (n < 0)
	{
		n_c = -n;
		len++;
	}
	if (!(s = ft_strnew(len)))
		return (NULL);
	s[--len] = n_c % 10 + '0';
	while (n_c /= 10)
		s[--len] = n_c % 10 + '0';
	if (n < 0)
		*(s + 0) = '-';
	return (s);
}
