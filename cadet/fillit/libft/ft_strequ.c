/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:31:53 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/12 00:02:49 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1)
		return (0);
	if (!s2)
		return (1);
	while (*s1 == *s2)
	{
		if (*(s1 + 1) == '\0' && *(s2 + 1) == '\0')
			return (1);
		s1++;
		s2++;
	}
	return (0);
}
