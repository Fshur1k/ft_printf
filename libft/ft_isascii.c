/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:29:12 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/18 10:59:13 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check if character is ASCII (0–127).
 * @param n Character to check.
 * @return 1 if true, 0 otherwise.
 */
int	ft_isascii(int n)
{
	return (n >= 0 && n <= 127);
}
