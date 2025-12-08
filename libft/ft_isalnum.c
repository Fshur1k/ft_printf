/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:29:20 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/18 10:58:59 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check if character is alphanumeric.
 * @param n Character to check.
 * @return 1 if true, 0 otherwise.
 */
int	ft_isalnum(int n)
{
	return ((n >= 48 && n <= 57)
		|| (n >= 65 && n <= 90) || (n >= 97 && n <= 122));
}
