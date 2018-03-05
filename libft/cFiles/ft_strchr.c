/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 18:43:53 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/27 19:34:05 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Locate character in a string
 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	// Method 1
	char	ch;

	ch = c;
	while (*s != '\0' && *s != ch)
		s++;
	return ((*s == ch) ? (char *)s : NULL);

	
	/* Method 2
	 * size_t	len;
	 * len = ft_strlen(s);
	 * (len + 1) will take of c = '\0'
	 * return (ft_memchr(s, c, len + 1));
	 */
}
