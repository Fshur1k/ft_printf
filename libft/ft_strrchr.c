/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:01:22 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/18 11:01:26 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locate last occurrence of character.
 * @param s String to search.
 * @param c Character to find.
 * @return Pointer to character or NULL.
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*match;

	i = 0;
	match = NULL;
	while (s[i])
	{
		if (s[i] == (char) c)
			match = (char *)s + i;
		i++;
	}
	if ((char) c == '\0')
		return ((char *)s + i);
	return (match);
}

/* int main(void)
{
    const char *str = "Hello World!";

    // 1. Звичайний символ
    printf("Test 1: find 'o'\n");
    printf("strrchr:    %s\n", strrchr(str, 'o'));
    printf("ft_strrchr: %s\n\n", ft_strrchr(str, 'o'));

    // 2. Символ зустрічається лише один раз
    printf("Test 2: find 'H'\n");
    printf("strrchr:    %s\n", strrchr(str, 'H'));
    printf("ft_strrchr: %s\n\n", ft_strrchr(str, 'H'));

    // 3. Символ відсутній
    printf("Test 3: find 'x'\n");
    printf("strrchr:    %p\n", strrchr(str, 'x'));
    printf("ft_strrchr: %p\n\n", ft_strrchr(str, 'x'));

    // 4. Пошук пробілу
    printf("Test 4: find ' '\n");
    printf("strrchr:    %s\n", strrchr(str, ' '));
    printf("ft_strrchr: %s\n\n", ft_strrchr(str, ' '));

    // 5. Пошук '\0' (дуже важливо!)
    printf("Test 5: find '\\0'\n");
    printf("strrchr:    %p\n", strrchr(str, '\0'));
    printf("ft_strrchr: %p\n\n", ft_strrchr(str, '\0'));

    // 6. Строка з повторюваними символами
    const char *repeat = "aaaaabaaaaa";
    printf("Test 6: repeating chars ('a')\n");
    printf("strrchr:    %s\n", strrchr(repeat, 'a'));
    printf("ft_strrchr: %s\n\n", ft_strrchr(repeat, 'a'));

    // 7. Пошук символа > 127 (важливо!)
    printf("Test 7: find 200\n");
    printf("strrchr:    %p\n", strrchr(str, 200));
    printf("ft_strrchr: %p\n\n", ft_strrchr(str, 200));

    // 8. Строка з одним символом
    const char *single = "X";
    printf("Test 8: one character string\n");
    printf("strrchr:    %s\n", strrchr(single, 'X'));
    printf("ft_strrchr: %s\n\n", ft_strrchr(single, 'X'));

    // 9. Пошук символа після '\0'
    const char *zero_inside = "AB\0CD";  
    printf("Test 9: find 'C' after embedded null (should NOT find!)\n");
    printf("strrchr:    %p\n", strrchr(zero_inside, 'C'));
    printf("ft_strrchr: %p\n\n", ft_strrchr(zero_inside, 'C'));

    return 0;
} */