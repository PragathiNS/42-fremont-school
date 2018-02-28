/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:17:54 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/22 23:51:51 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char 	*ret;
	int		slen;

	slen = ft_strlen(src);
	ret = (char *)malloc(sizeof(*src) * (slen + 1));
	ret = ft_strcpy(ret, src);
	return (ret);
}
