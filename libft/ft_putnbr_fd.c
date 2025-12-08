/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:20:49 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/21 21:21:25 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Write integer to file descriptor.
 * @param n Integer.
 * @param fd File descriptor.
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	i;

	num = n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num < 10)
	{
		i = num + '0';
		write(fd, &i, 1);
	}
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
}

/* int main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return 0;
} */
