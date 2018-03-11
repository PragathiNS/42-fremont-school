/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 23:06:04 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/08 23:11:04 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	tlen;

	tlen = ft_strlen(s1) + ft_strlen(s2);
	ret = (char *)ft_memalloc(tlen + 1);
	if (ret == NULL)
		return (NULL);
	ret = ft_strcat(s1, s2);
	return (ret);
}
