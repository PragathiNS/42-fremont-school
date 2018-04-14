/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 18:09:04 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/12 00:00:05 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_white(char const c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n'))
		return (1);
	else
		return (0);
}

char			*ft_strtrim(char const *s)
{
	int			i;
	int			len;
	char		*str;

	if (s == 0)
		return (0);
	len = ft_strlen(s);
	while (ft_white(s[len - 1]))
		len--;
	i = -1;
	while (ft_white(s[++i]))
		len--;
	if (len <= 0)
		len = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	s += i;
	i = -1;
	while (++i < len)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
