/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:50:43 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/18 10:59:44 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Search memory for a byte value.
 * @param s Memory block.
 * @param c Byte to search for.
 * @param n Number of bytes.
 * @return Pointer to first occurrence or NULL.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr = NULL;

	ptr = (const void *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == (unsigned char) c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/* static void print_result(const void *std, const void *ft)
{
    printf("memchr:    %p\n", std);
    printf("ft_memchr: %p\n\n", ft);
}

int main(void)
{
    char buf1[] = "Hello World!";
    char buf2[] = "abcdefgabcdefg";
    unsigned char bin[] = {0, 1, 255, 128, 64, 0};
    char with_zero[] = {'A','B','C','\0','D','E','F'};
    
    printf("===== Test 1: simple match =====\n");
    print_result(memchr(buf1, 'o', 12), ft_memchr(buf1, 'o', 12));

    printf("===== Test 2: match at beginning =====\n");
    print_result(memchr(buf1, 'H', 12), ft_memchr(buf1, 'H', 12));

    printf("===== Test 3: match at end =====\n");
    print_result(memchr(buf1, '!', 12), ft_memchr(buf1, '!', 12));

    printf("===== Test 4: no match =====\n");
    print_result(memchr(buf1, 'x', 12), ft_memchr(buf1, 'x', 12));

    printf("===== Test 5: multiple occurrences (should return first) =====\n");
    print_result(memchr(buf2, 'a', 14), ft_memchr(buf2, 'a', 14));

    printf("===== Test 6: stop before first match (n < index) =====\n");
    print_result(memchr(buf2, 'a', 2), ft_memchr(buf2, 'a', 2));

    printf("===== Test 7: n = 0 =====\n");
    print_result(memchr(buf1, 'H', 0), ft_memchr(buf1, 'H', 0));

    printf("===== Test 8: searching for '\\0' inside buffer =====\n");
    print_result(memchr(with_zero, '\0', 7), ft_memchr(with_zero, '\0', 7));

    printf("===== Test 9: binary data (non ASCII values) =====\n");
    print_result(memchr(bin, 255, 6), ft_memchr(bin, 255, 6));

    printf("===== Test 10: searching for value > 255 =====\n");
    // memchr uses (unsigned char)c
    print_result(memchr(bin, 512, 6), ft_memchr(bin, 512, 6));

    printf("===== Test 11: stop exactly at matching boundary =====\n");
    print_result(memchr(bin, 64, 4), ft_memchr(bin, 64, 4)); // n too small
    
    printf("===== Test 12: match exactly at the last allowed byte =====\n");
    print_result(memchr(bin, 64, 5), ft_memchr(bin, 64, 5));
    
    return 0;
}
 */