/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:56:36 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/24 18:01:08 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*p_sbig;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		if (big[i] == little[j])
		{
			p_sbig = &big[i];
			while ((i + j) < len && big[i + j] == little[j]
				&& little[j] != '\0')
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)p_sbig);
		}
		i++;
	}
	return (NULL);
}
