/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:00:24 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/25 19:21:01 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char *str1 = "Hello";
	const char *str2 = "world";
	char *str3 = ft_strjoin(str1, str2);

	printf("str3: %s\n", str3);
	return (0);
}