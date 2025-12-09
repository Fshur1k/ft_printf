/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:25:14 by ofedota           #+#    #+#             */
/*   Updated: 2025/12/09 12:00:10 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_eval_format(va_list args, char format)
{
	if (format == 'c')
		return (write_char(va_arg(args, int)));
	else if (format == 's')
		return (write_str(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (print_base10(va_arg(args, int)));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (format == 'u')
		return (print_uint(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
	{
		if (format == 'X')
			return (ft_print_hex(va_arg(args, unsigned int), 1));
		else
			return (ft_print_hex(va_arg(args, unsigned int), 0));
	}
	else if (format == '%')
		return (write(1, "%", 1));
	return (0);
}

/**
 * @brief Outputs formatted data to stdout.
 * @param str Format string containing conversion specifications.
 * @param ... Variable arguments to be formatted and printed.
 * @return The total number of characters printed.
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_eval_format(args, str[++i]);
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
