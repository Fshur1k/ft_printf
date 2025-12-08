/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:34:29 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/18 10:59:59 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compare two memory blocks.
 * @param s1 First block.
 * @param s2 Second block.
 * @param n Number of bytes.
 * @return Difference between first differing bytes.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_ptr = NULL;
	const unsigned char	*s2_ptr = NULL;

	s1_ptr = s1;
	s2_ptr = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1_ptr[i] != s2_ptr[i])
			return (s1_ptr[i] - s2_ptr[i]);
		i++;
	}
	return (0);
}

/* int ft_memcmp(const void *s1, const void *s2, size_t n);

static void print_result(int std, int ft)
{
    printf("memcmp:    %d\n", std);
    printf("ft_memcmp: %d\n\n", ft);
}

int main(void)
{
    char a1[] = "Hello World!";
    char a2[] = "Hello World!";

    printf("===== Test 1: identical buffers =====\n");
    print_result(memcmp(a1, a2, 12), ft_memcmp(a1, a2, 12));

    printf("===== Test 2: first byte different =====\n");
    char b1[] = "Zello";
    char b2[] = "Hello";
    print_result(memcmp(b1, b2, 5), ft_memcmp(b1, b2, 5));

    printf("===== Test 3: difference in the middle =====\n");
    char c1[] = "abcXdef";
    char c2[] = "abcYdef";
    print_result(memcmp(c1, c2, 7), ft_memcmp(c1, c2, 7));

    printf("===== Test 4: difference only at last compared byte =====\n");
    char d1[] = "abcdefg";
    char d2[] = "abcdefh";
    print_result(memcmp(d1, d2, 7), ft_memcmp(d1, d2, 7));

    printf("===== Test 5: n = 0 =====\n");
    print_result(memcmp(a1, a2, 0), ft_memcmp(a1, a2, 0));

    printf("===== Test 6: binary data (unsigned char behavior) =====\n");
    unsigned char bin1[] = {10, 20, 30, 255, 40};
    unsigned char bin2[] = {10, 20, 30, 100, 40};
    print_result(memcmp(bin1, bin2, 5), ft_memcmp(bin1, bin2, 5));

    printf("===== Test 7: embedded null bytes =====\n");
    char e1[] = {'A','B','C','\0','X','Y'};
    char e2[] = {'A','B','C','\0','X','Z'};
    print_result(memcmp(e1, e2, 6), ft_memcmp(e1, e2, 6));

    printf("===== Test 8: values > 127 (signed char test) =====\n");
    char f1[] = {(char)200, 0, 0};
    char f2[] = {(char)150, 0, 0};
    print_result(memcmp(f1, f2, 3), ft_memcmp(f1, f2, 3));

    printf("===== Test 9: return value signs must match system memcmp =====\n");
    // system memcmp returns <0, >0, or 0 — sign matters, not exact number
    char g1[] = "abc";
    char g2[] = "abd";
    print_result(memcmp(g1, g2, 3), ft_memcmp(g1, g2, 3));

    printf("===== Test 10: short comparison, first bytes match =====\n");
    print_result(memcmp(a1, a2, 3), ft_memcmp(a1, a2, 3));

    printf("===== Test 11: completely different binary buffers =====\n");
    unsigned char h1[] = {0, 1, 2, 3, 4};
    unsigned char h2[] = {5, 6, 7, 8, 9};
    print_result(memcmp(h1, h2, 5), ft_memcmp(h1, h2, 5));

    printf("===== Test 12: mismatch only after many equal bytes =====\n");
    char long1[] = "aaaaaaaaaaaaaaaaaaaaaaaab";
    char long2[] = "aaaaaaaaaaaaaaaaaaaaaaaac";
    print_result(memcmp(long1, long2, 30), ft_memcmp(long1, long2, 30));

    return (0);
} */