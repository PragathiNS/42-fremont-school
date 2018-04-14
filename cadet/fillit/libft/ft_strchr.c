/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:53:55 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/08 15:59:49 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char)c;
	while (*s)
	{
		if (chr == '\0')
		{
			while (*s)
				s++;
			return ((char *)s);
		}
		else if (*s != chr)
			s++;
		else
			return ((char *)s);
	}
	return (NULL);
}
