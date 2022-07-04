/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:24:49 by bfranks           #+#    #+#             */
/*   Updated: 2022/07/04 16:26:04 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_length(size_t n, int radix)
{
	int	count;

	if (!n)
		return (1);
	count = 0;
	while (n > 0)
	{
		n /= radix;
		count++;
	}
	return (count);
}
