/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_16.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:34:39 by ofedota           #+#    #+#             */
/*   Updated: 2025/12/09 11:23:02 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_base(unsigned long numb, char *base)
{
	int	count;

	count = 0;
	if (numb >= 16)
	{
		count += hex_base(numb / 16, base);
	}
	count += write(1, &base[numb % 16], 1);
	return (count);
}

int	ft_print_hex(unsigned int num, int is_upper)
{
	if (num == 0)
		return (write(1, "0", 1));
	if (is_upper)
		return (hex_base((unsigned long)num, "0123456789ABCDEF"));
	else
		return (hex_base((unsigned long)num, "0123456789abcdef"));
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	long_int;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	long_int = (unsigned long)ptr;
	return (write(1, "0x", 2) + hex_base(long_int, "0123456789abcdef"));
}
