/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 00:09:30 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/13 00:21:16 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*cpy;
	t_list	*new;

	if (!f || !lst)
		return (NULL);
	cpy = f(lst);
	new = cpy;
	while (lst->next)
	{
		lst = lst->next;
		if (!(cpy->next = f(lst)))
		{
			free(cpy->next);
			return (NULL);
		}
		cpy = cpy->next;
	}
	return (new);
}
