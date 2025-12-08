/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:22:36 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/19 17:24:55 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  Search for a substring in a string with length limit.
 * @param  big     The string to search in.
 * @param  little  The substring to find.
 * @param  len     Maximum number of characters to search.
 * @return Pointer to the first occurrence, or NULL.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	if (len == 0 || little_len > len)
		return (NULL);
	while ((i <= (len - little_len)) && (big[i] != '\0'))
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/* void test(const char *haystack, const char *needle, size_t len)
{
    char *std_res = strnstr(haystack, needle, len);
    char *ft_res = ft_strnstr(haystack, needle, len);

    printf("--------------------------------------------------\n");
    printf("HAYSTACK: \"%s\"\n", haystack);
    printf("NEEDLE:   \"%s\"\n", needle);
    printf("LEN:      %zu\n", len);

    printf("strnstr:  %s\n", std_res ? std_res : "NULL");
    printf("ft_strnstr: %s\n", ft_res ? ft_res : "NULL");

    if (std_res == ft_res || (std_res && ft_res && strcmp(std_res, ft_res) == 0))
        printf("RESULT:   ✅ MATCH\n");
    else
        printf("RESULT:   ❌ DIFFERENT\n");
}

int main(void)
{
    test("Hello world", "world", 11);
    test("Hello world", "world", 5);
    test("Hello world", "lo", 4);
    test("Hello world", "lo", 5);
    test("Hello world", "", 5);
    test("", "hello", 5);
    test("abc", "abcd", 10);
    test("abcdabcabcd", "abcabcd", 11);
    test("abcdabcabcd", "abcabcd", 5);
    test("AAAAAAAAAAAAAA", "AAAAB", 14);
    test("42 Prague Libft", "Prag", 20);
    test("42 Prague Libft", "Prag", 3);
    test("test", "test", 0);
    test("test", "", 0);
    test("lorem ipsum dolor sit amet", "ipsum", 30);
    test("lorem ipsum dolor sit amet", "ipsum", 5);

    return 0;
}
 */