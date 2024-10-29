/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:56:51 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/29 20:19:19 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	current = lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	if (current->next == NULL)
		return (current);
	return (current);
}
