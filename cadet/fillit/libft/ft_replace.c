/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 23:29:58 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/13 23:42:52 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_replace(char *str, char a, char b)
{
	char	*new;

	if (!(new = (char *)ft_memalloc(strlen(str))))
		return (NULL);
	if (!str)
		return (str);
	while (*str)
	{
		if (*str == a)
		{
			*new = b;
			new++;
			str++;
		}
		else
		{
			*new = *str;
			new++;
			str++;
		}
	}
	return (str);
}
