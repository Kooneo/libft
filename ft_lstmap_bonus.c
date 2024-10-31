/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:55:19 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/31 19:00:54 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*newnode;
	t_list	*head;

	current = lst;
	head = NULL;
	while (current != NULL)
	{
		newnode = ft_lstnew(current->content);
		if (!newnode)
		{
			del(newnode->content);
			ft_lstclear(&head, del);
		}
		newnode->content = f(current->content);
		ft_lstadd_back(&head, newnode);
		current = current->next;
	}
	return (head);
}
