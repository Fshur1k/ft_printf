/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:52:52 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/19 12:22:53 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicate a string.
 * @param s String to duplicate.
 * @return Nowly allocated copy or NULL.
 */
char	*ft_strdup(const char *s)
{
	size_t	l_string;
	char	*s_ptr;

	l_string = ft_strlen(s);
	s_ptr = malloc(l_string + 1);
	if (s_ptr == NULL)
		return (NULL);
	ft_memcpy(s_ptr, s, l_string + 1);
	return (s_ptr);
}

/* void print_result(char *name, char *ft, char *orig)
{
    if (!ft && !orig)
        printf("%s: OK (both NULL)\n", name);
    else if (!ft || !orig)
        printf("%s: FAIL (one is NULL)\n", name);
    else if (strcmp(ft, orig) == 0)
        printf("%s: OK\n", name);
    else
        printf("%s: FAIL\n", name);

    free(ft);
    free(orig);
}

int main(void)
{
    printf("=== TESTS FOR ft_strdup ===\n\n");

    // 1. Basic string
    print_result("Basic",
        ft_strdup("Hello world"),
        strdup("Hello world"));

    // 2. Empty string
    print_result("Empty",
        ft_strdup(""),
        strdup(""));

    // 3. One char
    print_result("One char",
        ft_strdup("A"),
        strdup("A"));

    // 4. Long string
    char long_str[1024];
    memset(long_str, 'X', 1023);
    long_str[1023] = '\0';

    print_result("Long string 1023 chars",
        ft_strdup(long_str),
        strdup(long_str));

    // 5. String with spaces
    print_result("Spaces",
        ft_strdup("   42   school   "),
        strdup("   42   school   "));

    // 6. String with embedded zeros — only first part should copy!
    const char weird[] = {'A','B','\0','C','D','E','\0'};
    print_result("Embedded zeros",
        ft_strdup(weird),
        strdup(weird));

    return 0;
} */