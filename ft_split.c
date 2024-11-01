/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:12:29 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/01 20:03:29 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(const char *input, char delimiter, int *length)
{
	int	i;
	int	word_count;

	if (!length || !input)
		return (0);
	*length = 0;
	word_count = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] != delimiter)
		{
			(*length)++;
			if (input[i + 1] == delimiter || input[i + 1] == '\0')
				word_count++;
		}
		i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		total_len;
	char	*trimmed_str;
	char	set[2];
	int		i;
	int		word_start;
	int		result_index;
	int		j;

	if (!s)
		return (NULL);
	set[0] = c;
	set[1] = '\0';
	i = 0;
	result_index = 0;
	trimmed_str = ft_strtrim(s, set);
	if (!trimmed_str)
		return (NULL);
	result = (char **)malloc((ft_count_word(trimmed_str, c, &total_len) + 1)
			* sizeof(char *));
	if (!result)
	{
		free(trimmed_str);
		return (NULL);
	}
	while (trimmed_str[i] != '\0')
	{
		while (trimmed_str[i] == c)
			i++;
		if (trimmed_str[i] != c && trimmed_str[i] != '\0')
		{
			word_start = i;
			while (trimmed_str[i] && trimmed_str[i] != c)
				i++;
			result[result_index] = ft_substr(trimmed_str, word_start, i
					- word_start);
			j = 0;
			if (!result[result_index])
			{
				while (j < result_index)
				{
					free(result[j]);
					j++;
				}
				free(result);
				free(trimmed_str);
				return (NULL);
			}
			result_index++;
		}
		if (trimmed_str[i] != '\0')
			i++;
	}
	result[result_index] = NULL;
	free(trimmed_str);
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	// 	// Test cases
// 	// 	// const char *test1 = "Hello,World,This,Is,A,Test";
// 	// 	const char *test2 = "   Hello   World   Test   ";
// 	// 	const char *test3 = "OneWord";
// 	// 	const char *test4 = ",,,Hello,,World,,,";
// 	// 	const char *test5 = "";

// 	// 	// Test arrays
// 	char **result1 = ft_split("hello!", ' ');
// 	// 	char **result2 = ft_split(test2, ' ');
// 	// 	char **result3 = ft_split(test3, ' ');
// 	// 	char **result4 = ft_split(test4, ',');
// 	// 	char **result5 = ft_split(test5, ',');

// 	// 	// Print results
// 	printf("\nTest 1 (split by comma): \n");
// 	if (result1)
// 	{
// 		for (int i = 0; result1[i] != NULL; i++)
// 			printf("[%s]\n", result1[i]);
// 	}
// 	else
// 		printf("NULL result\n");

// 	// 	printf("\nTest 2 (split by space): \n");
// 	// 	if (result2)
// 	// 	{
// 	// 		for (int i = 0; result2[i] != NULL; i++)
// 	// 			printf("[%s]\n", result2[i]);
// 	// 	}
// 	// 	else
// 	// 		printf("NULL result\n");

// 	// 	printf("\nTest 3 (single word): \n");
// 	// 	if (result3)
// 	// 	{
// 	// 		for (int i = 0; result3[i] != NULL; i++)
// 	// 			printf("[%s]\n", result3[i]);
// 	// 	}
// 	// 	else
// 	// 		printf("NULL result\n");

// 	// 	printf("\nTest 4 (multiple delimiters): \n");
// 	// 	if (result4)
// 	// 	{
// 	// 		for (int i = 0; result4[i] != NULL; i++)
// 	// 			printf("[%s]\n", result4[i]);
// 	// 	}
// 	// 	else
// 	// 		printf("NULL result\n");

// 	// 	printf("\nTest 5 (empty string): \n");
// 	// 	if (result5)
// 	// 	{
// 	// 		for (int i = 0; result5[i] != NULL; i++)
// 	// 			printf("[%s]\n", result5[i]);
// 	// 	}
// 	// 	else
// 	// 		printf("NULL result\n");

// 	// 	// Free allocated memory
// 	// 	if (result1)
// 	// 	{
// 	// 		for (int i = 0; result1[i] != NULL; i++)
// 	// 			free(result1[i]);
// 	// 		free(result1);
// 	// 	}
// 	// 	if (result2)
// 	// 	{
// 	// 		for (int i = 0; result2[i] != NULL; i++)
// 	// 			free(result2[i]);
// 	// 		free(result2);
// 	// 	}
// 	// 	if (result3)
// 	// 	{
// 	// 		for (int i = 0; result3[i] != NULL; i++)
// 	// 			free(result3[i]);
// 	// 		free(result3);
// 	// 	}
// 	// 	if (result4)
// 	// 	{
// 	// 		for (int i = 0; result4[i] != NULL; i++)
// 	// 			free(result4[i]);
// 	// 		free(result4);
// 	// 	}
// 	// 	if (result5)
// 	// 	{
// 	// 		for (int i = 0; result5[i] != NULL; i++)
// 	// 			free(result5[i]);
// 	// 		free(result5);
// 	// 	}

// 	return (0);
// }