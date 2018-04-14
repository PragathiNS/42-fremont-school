/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 15:42:20 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/05 22:02:17 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		len;
	size_t		i;
	char		*str;

	len = ft_strlen(s1);
	i = 0;
	if (!(str = (char *)malloc((1 + len) * sizeof(char))))
		return (NULL);
	else
		while (i < len)
		{
			str[i] = s1[i];
			i++;
		}
	str[i] = '\0';
	return (str);
}
