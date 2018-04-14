/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:33:35 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/05 17:18:05 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1)
		return (1);
	if (!s2)
		return (0);
	if (!n)
		return (1);
	while (*s1 == *s2 && i < n)
	{
		if ((*s1 == '\0') || (i == n - 1))
			return (1);
		else
		{
			s1++;
			s2++;
			i++;
		}
	}
	return (0);
}
