// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_split.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/10/26 14:12:29 by zbakour           #+#    #+#             */
// /*   Updated: 2024/10/30 16:57:26 by zbakour          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"

// char	**ft_split(char const *s, char c)
// {
// 	int		i;
// 	int		count;
// 	int		sub_strlen;
// 	char	*new_str;
// 	int		current_index;
// 	int		start_index;
// 	char	**result;

// 	i = 0;
// 	count = 0;
// 	new_str = ft_strtrim(s, &c);
// 	// Calculate the number of substrings
// 	while (new_str[i] != '\0')
// 	{
// 		// If we find the start of a new substring
// 		if (new_str[i] != c)
// 		{
// 			count++;
// 			while (new_str[i] != c && new_str[i] != '\0')
// 				i++; // Move to the end of the substring
// 		}
// 		else
// 			i++; // Skip separators
// 	}
// 	// Allocate memory for the array of strings
// 	result = malloc((count + 1) * sizeof(char *));
// 	if (!result)
// 		return (NULL);
// 	// Reset variables for extraction
// 	i = 0;
// 	current_index = 0;
// 	// Extract each substring
// 	while (new_str[i] != '\0')
// 	{
// 		if (new_str[i] != c)
// 		{
// 			start_index = i;
// 			sub_strlen = 0;
// 			while (new_str[i] != c && new_str[i] != '\0')
// 			{
// 				sub_strlen++;
// 				i++;
// 			}
// 			// Allocate and copy substring
// 			result[current_index] = malloc((sub_strlen + 1) * sizeof(char));
// 			if (!result[current_index])
// 			{
// 				// Free previously allocated memory on failure
// 				while (current_index > 0)
// 					free(result[--current_index]);
// 				free(result);
// 				return (NULL);
// 			}
// 			strncpy(result[current_index], &new_str[start_index], sub_strlen);
// 			result[current_index][sub_strlen] = '\0';
// 			current_index++;
// 		}
// 		else
// 		{
// 			i++;
// 		}
// 	}
// 	// Null-terminate the array
// 	result[current_index] = NULL;
// 	return (result);
// }


char	**ft_split(char const *s, char c)
{
    (void)s;
    (void)c;
    return (0);
}