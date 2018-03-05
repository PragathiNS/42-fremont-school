/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:35:25 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/23 00:18:22 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	if (n < 0)
		diff = (*(s1 + i) - *(s2 + i));
	if (n == 0)
		diff = 0;
	while (i < n && (*(s1 + i) != '\0' || *(s2 + i) != '\0'))
	{
		diff = (*(s1 + i) - *(s2 + i));
		if (diff != 0)
			break;
		i++;
	}
	return (diff);
}
