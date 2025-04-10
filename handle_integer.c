/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_integer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:37:32 by zbakour           #+#    #+#             */
/*   Updated: 2024/12/20 16:30:06 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	handle_integer(va_list args)
{
	int	i;

	i = va_arg(args, int);
	return (ft_putnbr(i, 0));
}
