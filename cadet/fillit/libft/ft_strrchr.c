/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:54:09 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/11 23:59:09 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len;
	char		*str;

	len = ft_strlen(s);
	str = (char *)s + len;
	while (*str != c)
	{
		if (str == s)
			return (0);
		str--;
	}
	return (str);
}
