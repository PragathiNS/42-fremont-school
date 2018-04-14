/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:11:56 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/12 00:01:00 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1) + 1;
	s2len = ft_strlen(s2) + 1;
	if (s1len <= s2len)
		i = s1len;
	else
		i = s2len;
	i = ft_memcmp(s1, s2, i);
	return (i);
}
