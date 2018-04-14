/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 15:29:51 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/12 01:10:04 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		s2len;

	s2len = ft_strlen(s2);
	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1 != '\0' && len-- >= s2len)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, s2len) == 0)
			return ((char*)s1);
		s1++;
	}
	return (0);
}
