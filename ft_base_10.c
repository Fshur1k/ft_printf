/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:09:00 by ofedota           #+#    #+#             */
/*   Updated: 2025/12/09 11:23:39 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_uint(unsigned int num)
{
	char	c;
	int		count;

	count = 0;
	if (num >= 10)
		count += print_uint(num / 10);
	c = (num % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

int	print_base10(long n)
{
	char	i;
	int		count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count += write(1, "-", 1);
	}
	if (n < 10)
	{
		i = n + '0';
		count += write(1, &i, 1);
	}
	else
	{
		count += print_base10(n / 10);
		count += print_base10(n % 10);
	}
	return (count);
}
