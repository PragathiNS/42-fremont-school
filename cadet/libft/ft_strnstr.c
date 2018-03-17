/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 19:44:18 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/17 02:47:28 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	if (*needle == '\0')
		return ((char*)haystack);
	n_len = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= n_len)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, n_len) == 0)
			return ((char*)haystack);
		haystack++;
	}
	return (0);
}
