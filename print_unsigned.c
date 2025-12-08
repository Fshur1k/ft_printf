/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:37:41 by ofedota           #+#    #+#             */
/*   Updated: 2025/12/01 19:21:38 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	len_uint(unsigned int num)
{
	int len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

void	print_uint(unsigned int num)
{
	char	c;

	if (num >= 10)
		print_uint(num/10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}