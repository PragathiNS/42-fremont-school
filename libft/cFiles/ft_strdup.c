/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:17:54 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/07 19:47:32 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*ret;
	size_t	slen;

	slen = ft_strlen(src);
	ret = (char *)malloc(slen + 1);
	if (ret == NULL)
		return (NULL);
	ft_memcpy(ret, src, slen + 1);
	return ((char *)ret);
}
