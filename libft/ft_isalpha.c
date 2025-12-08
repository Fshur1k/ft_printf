/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 06:43:29 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/18 10:59:05 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check if character is alphabetic (A–Z or a–z).
 * @param n Character to check.
 * @return 1 if true, 0 otherwise.
 */
int	ft_isalpha(int n)
{
	return ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'));
}
