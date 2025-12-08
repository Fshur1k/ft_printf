/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:51:26 by ofedota           #+#    #+#             */
/*   Updated: 2025/12/01 18:59:57 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		ft_printf(const char *str, ...);
void	print_uint(unsigned int num);
int		ft_print_ptr(void *ptr);
int		len_uint(unsigned int num);

