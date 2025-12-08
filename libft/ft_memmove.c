/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:54:47 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/25 15:12:07 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy memory safely (handles overlapping).
 * @param dest Destination pointer.
 * @param src Source pointer.
 * @param n Number of bytes.
 * @return Destination pointer.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_src;
	unsigned char	*p_dst;

	p_dst = (unsigned char *) dest;
	p_src = (unsigned char *) src;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		while (n--)
		{
			*p_dst++ = *p_src++;
		}
	}
	else if (dest > src)
	{
		p_dst += (n - 1);
		p_src += (n - 1);
		while (n--)
		{
			*p_dst-- = *p_src--;
		}
	}
	return (dest);
}
