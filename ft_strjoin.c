/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:00:27 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/25 19:21:18 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *string;
	size_t s1_len;
	size_t s2_len;
	size_t i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);

	string = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));

	if (!string)
		return (NULL);
	i = 0;
	while (i < (s1_len + s2_len))
	{
		string[i] = s1[i];
		i++;
	}

	while (i < (s1_len + s2_len))
	{
		string[i] = s2[i];
		i++;
	}

	string[i] = '\0';

	return (string);
}