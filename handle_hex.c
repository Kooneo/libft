/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:37:00 by zbakour           #+#    #+#             */
/*   Updated: 2024/12/20 16:30:06 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	handle_hex(va_list args, int uppercase)
{
	char			*base;
	unsigned int	num;

	base = "0123456789abcdef";
	if (uppercase)
		base = "0123456789ABCDEF";
	num = va_arg(args, unsigned int);
	return (ft_decimal_to_hex(base, num));
}
