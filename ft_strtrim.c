/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:28:26 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/28 15:55:53 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char		*p_start;
// 	char		*p_end;
// 	char		*string;
// 	int			s1_len;

// 	if (!s1 || !set)
// 		return (NULL);
// 	s1_len = ft_strlen(s1);
// 	p_start = (char *)s1;
// 	p_end = (char *)(s1 + s1_len - 1);
// 	while (*p_start && ft_strchr(set, *p_start))
// 	{
// 		s1_len--;
// 		p_start++;
// 	}
// 	while (p_end > p_start && ft_strchr(set, *p_end))
// 	{
// 		p_end--;
// 		s1_len--;
// 	}
// 	string = (char *)malloc((p_end - p_start + 2) * sizeof(char));
// 	if (!string)
// 		return (NULL);
// 	ft_memcpy(string, p_start, s1_len);
// 	string[s1_len] = '\0';
// 	return (string);
// }

static void	find_trim_bounds(const char *s1, const char *set, char **start,
		char **end)
{
	*start = (char *)s1;
	*end = (char *)(s1 + ft_strlen(s1) - 1);
	while (**start && ft_strchr(set, **start))
	{
		(*start)++;
	}
	while (*end > *start && ft_strchr(set, **end))
	{
		(*end)--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p_start;
	char	*p_end;
	char	*string;
	int		trimmed_length;

	if (!s1 || !set)
		return (NULL);
	find_trim_bounds(s1, set, &p_start, &p_end);
	trimmed_length = p_end - p_start + 1;
	string = (char *)malloc((trimmed_length + 1) * sizeof(char));
	if (!string)
		return (NULL);
	ft_memcpy(string, p_start, trimmed_length);
	string[trimmed_length] = '\0';
	return (string);
}
