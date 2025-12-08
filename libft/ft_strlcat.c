/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:58:21 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/18 11:00:58 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenate string with size limit (BSD function).
 * @param dst Destination buffer.
 * @param src Source string.
 * @param size Size of destination buffer.
 * @return Length of attempted concatenation.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_len);
	while (dst[dst_len] && dst_len < size)
	{
		dst_len++;
	}
	if (dst_len == size)
		return (size + src_len);
	while (size > dst_len + i + 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
