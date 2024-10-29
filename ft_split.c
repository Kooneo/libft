// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_split.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/10/26 14:12:29 by zbakour           #+#    #+#             */
// /*   Updated: 2024/10/28 13:12:39 by zbakour          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"

// #include <stdlib.h>
// #include <string.h>

// static int	count_substrings(const char *s, char c);
// static char	**allocate_result_array(int count);
// static char	*extract_substring(const char *s, int start, int length);

// // Main function to split the string
// char	**ft_split(char const *s, char c)
// {
// 	int		current_index;
// 	int		i;
// 	int		start_index;
// 	int		sub_strlen;
// 	char	*new_str;
// 	int		count;
// 	char	**result;

// 	new_str = ft_strtrim(s, &c);
// 	if (!new_str)
// 		return (NULL);
// 	count = count_substrings(new_str, c);
// 	result = allocate_result_array(count);
// 	if (!result)
// 	{
// 		free(new_str);
// 		return (NULL);
// 	}
// 	current_index = 0;
// 	i = 0;
// 	while (new_str[i] != '\0')
// 	{
// 		if (new_str[i] != c)
// 		{
// 			start_index = i;
// 			sub_strlen = 0;
// 			// Move to the end of the substring
// 			while (new_str[i] != c && new_str[i] != '\0')
// 			{
// 				sub_strlen++;
// 				i++;
// 			}
// 			// Extract the substring and assign it to result
// 			result[current_index++] = extract_substring(new_str, start_index,
// 					sub_strlen);
// 			if (!result[current_index - 1])
// 			{
// 				// Free previously allocated memory on failure
// 				while (current_index > 0)
// 					free(result[--current_index]);
// 				free(result);
// 				free(new_str);
// 				return (NULL);
// 			}
// 		}
// 		else
// 		{
// 			i++; // Skip separators
// 		}
// 	}
// 	result[current_index] = NULL; // Null-terminate the array
// 	free(new_str);                // Free the trimmed string
// 	return (result);
// }

// // Function to count the number of substrings
// static int	count_substrings(const char *s, char c)
// {
// 	int	count;
// 	int	i;

// 	count = 0;
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		// If we find the start of a new substring
// 		if (s[i] != c)
// 		{
// 			count++;
// 			while (s[i] != c && s[i] != '\0')
// 				i++; // Move to the end of the substring
// 		}
// 		else
// 		{
// 			i++; // Skip separators
// 		}
// 	}
// 	return (count);
// }

// // Function to allocate memory for the result array
// static char	**allocate_result_array(int count)
// {
// 	char **result = malloc((count + 1) * sizeof(char *));
// 	return (result);
// }

// // Function to extract a substring
// static char	*extract_substring(const char *s, int start, int length)
// {
// 	char	*substr;

// 	substr = malloc((length + 1) * sizeof(char));
// 	if (!substr)
// 		return (NULL); // Handle allocation failure
// 	strncpy(substr, &s[start], length);
// 	substr[length] = '\0'; // Null-terminate the substring
// 	return (substr);
// }
