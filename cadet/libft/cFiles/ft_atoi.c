/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:38:07 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/14 20:47:52 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	i;
	int		ret;
	int		sign;

	i = 0;
	ret = 0;
	sign = 1;
	if (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (i < ft_strlen(str))
	{
		if (!ft_isdigit(str[i]))
		{
			return (0);
		}
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return (sign * ret);
}
