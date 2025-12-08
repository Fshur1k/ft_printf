/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:25:14 by ofedota           #+#    #+#             */
/*   Updated: 2025/12/08 22:40:11 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>

static int write_str(char *str)
{
	int count;

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

int	print_uint(unsigned int num)
{
	char	c;
	int 	count;

	count = 0;
	if (num >= 10)
		count += print_uint(num/10);
	c = (num % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args,str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i+1] == 'c')
		{
			i++;
			char new_char = (char)va_arg(args, int);
			count += write(1, &new_char, 1);
		}
		else if (str[i] == '%' && str[i+1] == 's')
		{
			i++;
			count += write_str(va_arg(args, char *));
		}
		else if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i'))
		{
			i++;
			int	new_int = va_arg(args, int);
			ft_putnbr_fd(new_int,1);
			char *int_len = ft_itoa(new_int);
			count += ft_strlen(int_len);
			free(int_len);
		}
		else if (str[i] == '%' && str[i+1] == 'p')
		{
			i++;
			count += ft_print_ptr(va_arg(args, void *));
		}
		else if  (str[i] == '%' && str[i+1] == 'u')
		{
			i++;
			count += print_uint(va_arg(args, unsigned int));
		}
		else if (str[i] == '%' && str[i+1] == 'x')
		{
			i++;
			count += ft_print_hex(va_arg(args, unsigned int), 0);
		}
		else if (str[i] == '%' && str[i+1] == 'X')
		{
			i++;
			count += ft_print_hex(va_arg(args, unsigned int), 1);
		}
		else
			count += write(1, str + i, 1);
		i++;
	}
	va_end(args);
	return (count);
}


int main(void)
{
	char *str = NULL;
	ft_printf("%d\n",ft_printf("char:%s\n", str));
	printf("%d\n",printf("char:%s\n", str));
	return (0);
}