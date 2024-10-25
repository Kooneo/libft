/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:25:46 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/25 12:30:23 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (!dst && !src && n > 0)
		return (NULL);
	while (n--)
	{
		*dest = *source;
		dest++;
		source++;
	}
	return ((void *)dst);
}
