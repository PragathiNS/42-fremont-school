/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 00:25:32 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/15 01:16:06 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	int		len;
	char	*s;

	if ((sign = n) < 0)
		n = n * -1;
	i = 0;
	len = ft_no_digits(n);
	if (sign < 0)
		len = len + 1;
	s = ft_strnew(len);
	if (s)
	{
		while (n > 0)
		{
			s[i++] = n % 10 + '0';
			n = n / 10;
		}
		if (sign < 0)
			s[i++] = '-';
		s[i] = '\0';
		s = ft_strrev(s);
	}
	return (s);
}
