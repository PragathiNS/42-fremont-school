/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 23:27:14 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/14 23:32:57 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	size_t	len;
	size_t	i;
	char	temp;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		temp = s[len - 1];
		s[len - 1] = s[i];
		s[i] = temp;
		i++;
		len--;
	}
	return (s);
}
