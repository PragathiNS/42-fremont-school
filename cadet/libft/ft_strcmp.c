/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 09:58:41 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/17 01:40:42 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	int		diff;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len1 = (len1 <= len2) ? len1 : len2;
	diff = ft_memcmp(s1, s2, len1 + 1);
	return (diff);
}
