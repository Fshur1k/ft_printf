/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:38:07 by ofedota           #+#    #+#             */
/*   Updated: 2025/12/09 11:21:09 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		count += write(1, str, 1);
		str++;
	}
	return (count);
}

int	write_char(int charact)
{
	char	letter;

	letter = charact;
	return (write(1, &letter, 1));
}
