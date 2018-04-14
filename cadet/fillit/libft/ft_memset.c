/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 02:57:17 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/08 13:42:12 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*str;
	unsigned char	chr;

	i = 0;
	str = (char *)b;
	chr = (unsigned char)c;
	while (i < len)
	{
		str[i] = chr;
		i++;
	}
	return (str);
}
