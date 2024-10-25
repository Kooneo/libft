/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:26:19 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/23 21:56:40 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*p_str1;
	const unsigned char	*p_str2;

	p_str1 = (const unsigned char *)str1;
	p_str2 = (const unsigned char *)str2;
	while (n--)
	{
		if (*p_str1 != *p_str2)
		{
			return (*p_str1 - *p_str2);
		}
		p_str1++;
		p_str2++;
	}
	return (0);
}
