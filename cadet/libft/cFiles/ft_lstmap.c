/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:50:29 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/14 20:55:13 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if (!lst)
		return (NULL);
	lst = f(lst);
	new = lst;
	while (lst->next)
	{
		lst = lst->next;
		if (!(lst->next = f(lst)))
		{
			free(lst->next);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new);
}
