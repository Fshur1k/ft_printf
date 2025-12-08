/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:25:14 by ofedota           #+#    #+#             */
/*   Updated: 2025/12/01 21:51:04 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>

int	ft_print_ptr(void *ptr);

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
			if (new_char == 0)
			{
				ft_putstr_fd("(null)",1);
				return (count);
			}
			write(1, &new_char, 1);
			count+=1;
		}
		else if (str[i] == '%' && str[i+1] == 's')
		{
			i++;
			char *new_str = va_arg(args, char *);
			if (new_str == NULL)
                new_str = "(null)";
			ft_putstr_fd(new_str, 1);
			count+=ft_strlen(new_str);
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
			void *new_long = va_arg(args, void *);
			count += ft_print_ptr(new_long);
		}
		else if  (str[i] == '%' && str[i+1] == 'u')
		{
			i++;
			unsigned int new_u = va_arg(args, unsigned int);
			count += len_uint(new_u);
			print_uint(new_u);
		}
		else if (str[i] == '%' && str[i+1] == 'x')
		{
			i++;
			
		}
		else
			ft_putchar_fd((char)str[i], 1);
			count++;
		i++;
	}
	va_end(args);
	return (count);
}


int main(void)
{
	int new_int = -425;
	printf("%d\n",ft_printf("new char is: %u,\n", new_int));
	printf("%u", new_int);
	return (0);
}