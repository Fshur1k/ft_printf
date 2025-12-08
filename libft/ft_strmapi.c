/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:10:57 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/25 15:45:06 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char capitalize_even(unsigned int i, char c);
/**
 * @brief Apply function to each char in a string (map).
 * @param s Input string.
 * @param f Function to apply.
 * @return Newly allocated mapped string.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*arr;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	arr = malloc(s_len + 1);
	if (arr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		arr[i] = f(i, s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

/* char capitalize_even(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ft_toupper(c);
    return c;
}

int main(void)
{
	const char str[] = "this string is only has small letters";
	printf("%s\n", str);
	char *cap_str = ft_strmapi(str, capitalize_even);
	printf("%s\n", cap_str);
	free(cap_str);
	return (0);
	
} */