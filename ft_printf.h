/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:51:26 by ofedota           #+#    #+#             */
/*   Updated: 2025/12/09 11:20:13 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *str, ...);
int		print_uint(unsigned int num);
int		ft_print_hex(unsigned int num, int is_upper);
int		ft_print_ptr(void *ptr);
int		write_str(char *str);
int		write_char(int charact);
int		print_base10(long n);
