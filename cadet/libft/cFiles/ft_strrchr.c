/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 20:10:34 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/27 20:10:38 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *last;

	if (c == '\0')
		return (ft_strchr(s, c));
	while (ft_strchr(s, c) != NULL)
	{
		last = s;
		s++;
	}
	return ((char *)last);
}
