/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:24:35 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/19 17:22:19 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extract substring from string.
 * @param s Source string.
 * @param start Starting index.
 * @param len Maximum length of substring.
 * @return Newly allocated substring or NULL.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;
	size_t	sub_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		ptr = (char *)malloc(1);
		if (ptr == NULL)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	sub_len = s_len - start;
	if (len < sub_len)
		sub_len = len;
	ptr = (char *)malloc(sub_len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s + start, sub_len);
	ptr[sub_len] = '\0';
	return (ptr);
}
