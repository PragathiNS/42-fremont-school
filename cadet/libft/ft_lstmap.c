/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:50:29 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/17 02:44:24 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*res;
	t_list		*frst_node;
	t_list		*curr_node;

	frst_node = NULL;
	curr_node = NULL;
	if (lst)
	{
		res = f(lst);
		if ((frst_node = ft_lstnew(res->content, res->content_size)))
		{
			curr_node = frst_node;
			while ((lst = lst->next))
			{
				res = f(lst);
				if (!(curr_node->next = ft_lstnew(res->content,
												res->content_size)))
					return (NULL);
				curr_node = curr_node->next;
			}
		}
	}
	return (frst_node);
}
