/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:04:28 by rkwon             #+#    #+#             */
/*   Updated: 2018/02/26 17:29:33 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*elem;

	elem = NULL;
	if (!(elem = (t_list *)ft_memalloc(sizeof(t_list))))
		return (elem);
	if (!content)
	{
		elem->content = NULL;
		elem->content_size = 0;
	}
	else
	{
		elem->content = ft_memalloc(sizeof(content));
		if (elem->content == NULL)
		{
			free(elem);
			return (NULL);
		}
		ft_memcpy((elem->content), content, content_size);
		elem->content_size = content_size;
	}
	elem->next = NULL;
	return (elem);
}
