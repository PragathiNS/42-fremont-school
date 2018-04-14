/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:43:53 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/09 19:56:56 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;
	char			*new;

	i = 0;
	if (!(str = ft_strnew(len)) || !s)
		return (NULL);
	new = (char *)s;
	while (i < len)
		str[i++] = (new[start++]);
	str[i] = '\0';
	return (str);
}
