/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:29:04 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/18 10:59:22 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check if character is a digit (0–9).
 * @param n Character to check.
 * @return 1 if true, 0 otherwise.
 */
int	ft_isdigit(int n)
{
	return (n >= '0' && n <= '9');
}
