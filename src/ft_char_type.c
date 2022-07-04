/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:12:11 by bfranks           #+#    #+#             */
/*   Updated: 2022/07/04 16:19:38 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char_type(const char c, va_list v, int *i)
{
	if (c == 'c')
		return (ft_char_print(va_arg(v, int)));
	if (c == 's')
		return (ft_tr_print(v));
	if (c == 'i' || c == 'd')
		return (ft_num_print(va_arg(v, int)));
	if (c == 'u')
		return (ft_num_print(va_arg(v, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_hex_print(va_arg(v, unsigned int), c));
	if (c == 'p')
		return (ft_hex_print(va_arg(v, unsigned long), c));
	if (c == '%')
		return (ft_char_print(c));
	if (!c)
		return (0);
	else
		*i = *i - 1;
	return (0);
}
