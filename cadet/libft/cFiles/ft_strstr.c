/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:47:39 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/24 19:56:37 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* If needle is empty return haystack
 * If needle occurs nowhere in haystack, return NULL
 * Else, return a pointer to the first occurrence of needle
 */
char	*ft_strstr(const char *haystack, const char *needle)
{
	// New method
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while ((haystack = ft_strchr(haystack, *needle)) != NULL)
	{
		if (ft_memcmp(haystack, needle, needle_len) == 0)
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);


	/* Early method
	int		i;
	int		j;
	int		haystack_len;
	int		needle_len;

	i = 0;
	j = 0;
	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);

	if (needle_len == 0)
		return (haystack);
	while (i < haystack_len - needle_len)
	{
		while (j < needle_len)
		{
			if (needle[j] == haystack[i])
			{
				i++;
				j++;
			}
			else
			{
				i++;
				break;
			}
		}
		if (j == needle_len)
			return (haystack[i - j]);
	}
	return (NULL);
	*/
}
