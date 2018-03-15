/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 23:37:26 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/14 23:47:18 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_no_digits(int n)
{
	int	digits;

	digits = 0;
	while (n > 0)
	{
		n = n / 10;
		digits += 1;
	}
	return (digits);
}
