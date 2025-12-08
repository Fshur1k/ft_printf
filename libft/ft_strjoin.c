/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:49:00 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/19 17:25:09 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenate two strings in one.
 * @param s1 Pointer string #1
 * @param s2 Ponter string #2
 * @return Concatenated string or NULL in case allocation fail
 * */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	strl_1;
	size_t	strl_2;
	size_t	cont_strl;
	char	*str_p;

	if (!s1 || !s2)
		return (NULL);
	strl_1 = ft_strlen(s1);
	strl_2 = ft_strlen(s2);
	cont_strl = strl_1 + strl_2;
	str_p = (char *)malloc(cont_strl + 1);
	if (!str_p)
		return (NULL);
	ft_memcpy(str_p, s1, strl_1);
	ft_memcpy((str_p + strl_1), s2, strl_2);
	str_p[cont_strl] = '\0';
	return (str_p);
}

/* 
void test(const char *name, const char *s1, const char *s2, const char *expected)
{
    char *res = ft_strjoin(s1, s2);

    if (!res && expected == NULL)
        printf("%s: OK (NULL)\n", name);
    else if (!res && expected != NULL)
        printf("%s: FAIL (got NULL)\n", name);
    else if (expected && strcmp(res, expected) == 0)
        printf("%s: OK\n", name);
    else
        printf("%s: FAIL (got \"%s\", expected \"%s\")\n",
               name, res ? res : "(null)", expected);

    free(res);
}

int main(void)
{
    printf("=== TESTS FOR ft_strjoin ===\n\n");

    // 1. Normal case
    test("Basic join", "Hello", "World", "HelloWorld");

    // 2. With space
    test("Space join", "Hello ", "World", "Hello World");

    // 3. Empty s1
    test("Empty s1", "", "Test", "Test");

    // 4. Empty s2
    test("Empty s2", "Hello", "", "Hello");

    // 5. Both empty
    test("Both empty", "", "", "");

    // 6. Longer strings
    test("Long join", "1234567890", "abcdefghij", "1234567890abcdefghij");

    // 7. UTF-8
    test("UTF-8", "Привіт ", "світе", "Привіт світе");

    // 8. NULL input should return NULL
    char *res;

    res = ft_strjoin(NULL, "abc");
    if (!res)
        printf("NULL s1: OK (returned NULL)\n");
    else {
        printf("NULL s1: FAIL (must return NULL)\n");
        free(res);
    }

    res = ft_strjoin("abc", NULL);
    if (!res)
        printf("NULL s2: OK (returned NULL)\n");
    else {
        printf("NULL s2: FAIL (must return NULL)\n");
        free(res);
    }

    return 0;
} */