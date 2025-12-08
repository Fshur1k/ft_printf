/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:28:54 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/24 09:04:53 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check if character is printable (32–126).
 * @param n Character to check.
 * @return 1 if true, 0 otherwise.
 */
int	ft_isprint(int n)
{
	return (n >= 32 && n <= 126);
}
