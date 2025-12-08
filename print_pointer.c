/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:34:39 by ofedota           #+#    #+#             */
/*   Updated: 2025/12/01 19:10:13 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"

static void hex_base(unsigned long numb)
{
	char base[] = "0123456789abcdef";
	if (numb >= 16)
	{
		hex_base(numb/16);
	}
	write(1, &base[numb%16], 1);
}

static int	ft_len_ptr(unsigned long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}
int	ft_print_ptr(void *ptr)
{
	unsigned long long_int;
	int	total_len;

	total_len = 0;
	if (ptr == NULL)
	{
		ft_putstr_fd("(nil)",1);
		return (5);
	}
	long_int = (unsigned long)ptr;
	total_len = 2 + ft_len_ptr(long_int);
	ft_putstr_fd("0x",1);
	hex_base(long_int);
	return (total_len);
}