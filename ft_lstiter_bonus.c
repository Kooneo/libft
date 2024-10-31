/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:37:40 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/30 19:05:18 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}

// void	d(void *content)
// {
// 	char	*str;
// 	int		i;

// 	str = (char *)content; // Correct casting
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z') // Check if lowercase
// 			str[i] = str[i] - 32;           // Convert to uppercase
// 		i++;
// 	}
// }
// int	main(void)
// {
// 	t_list *lst = NULL;

// 	// Create list nodes with string content
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("hello")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("world")));

// 	// Print before
// 	t_list *temp = lst;
// 	printf("Before:\n");
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}

// 	// Apply uppercase function
// 	ft_lstiter(lst, d);

// 	// Print after
// 	temp = lst;
// 	printf("\nAfter:\n");
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}

// 	// Don't forget to free the list
// 	ft_lstclear(&lst, free);

// 	return (0);
// }