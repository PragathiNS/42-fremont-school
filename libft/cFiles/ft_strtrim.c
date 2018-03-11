/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 23:12:40 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/10 23:27:02 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s_copy;
	int		s_len;	
	char const	*se;
	int			size;

	s_len = ft_strlen(s);
	// Beginning spaces
	while (ft_isspace((unsigned char)*s))
		s++;
	se = s + (s_len - 1);
	// Trailing spaces
	while (ft_isspace((unsigned char)*se))
		se--;
	size = (se - s);

		

	

	s_copy = s;




}
