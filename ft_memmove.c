/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:36:51 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/25 14:19:19 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	i = n;
	dest = (unsigned char *)dest_str;
	src = (const unsigned char *)src_str;
	if (!dest_str && !src_str && n > 0)
		return (NULL);
	if (dest > src)
	{
		while (i > 0)
		{
			i--;
			dest[i] = src[i];
		}
	}
	else
	{
		while (n--)
		{
			*dest++ = *src++;
		}
	}
	return (dest_str);
}
