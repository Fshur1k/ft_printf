/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:42:32 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/19 17:24:40 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocate zero-initialized memory.
 * @param nmemb Number of elements.
 * @param size Size of one element.
 * @return Pointer to allocated memory or NULL.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	if (size != 0 && ((nmemb * size) / size != nmemb))
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/* void test(const char *msg, size_t nmemb, size_t size)
{
    printf("--------------------------------------------------\n");
    printf("%s\n", msg);
    printf("nmemb = %zu, size = %zu\n", nmemb, size);

    void *sys = calloc(nmemb, size);
    void *ft  = ft_calloc(nmemb, size);

    if (!sys && !ft)
    {
        printf("Both returned NULL — OK\n");
        return;
    }

    if (!sys && ft)
    {
        printf("System returned NULL, ft_calloc returned NOT NULL — FAIL\n");
        free(ft);
        return;
    }

    if (sys && !ft)
    {
        printf("System returned pointer, ft_calloc returned NULL — FAIL\n");
        free(sys);
        return;
    }

    // Compare memory content
    size_t total = nmemb * size;
    if (memcmp(sys, ft, total) == 0)
        printf("Memory comparison: OK (all zeroed)\n");
    else
        printf("Memory comparison: FAIL\n");

    free(sys);
    free(ft);
}
 */
/* int main(void)
{
    // Basic small allocations
    test("Test 1: simple calloc(5, 4)", 5, 4);
    test("Test 2: calloc(1, 1)", 1, 1);
    test("Test 3: calloc(10, 1)", 10, 1);
    test("Test 4: calloc(1, 10)", 1, 10);

    // Zero cases
    test("Test 5: calloc(0, 0)", 0, 0);
    test("Test 6: calloc(0, 5)", 0, 5);
    test("Test 7: calloc(5, 0)", 5, 0);

    // Larger blocks
    test("Test 8: calloc(100, 100)", 100, 100);
    test("Test 9: calloc(2048, 16)", 2048, 16);

    // Edge: size 1
    test("Test 10: calloc(50, 1)", 50, 1);

    // Edge: nmemb 1
    test("Test 11: calloc(1, 50)", 1, 50);

    // Overflow test (should return NULL)
    test("Test 12: overflow test", (size_t)-1, 2);
    test("Test 13: overflow test", (size_t)-1 / 2 + 1, 3);

    // Random-like sizes
    test("Test 14: calloc(1234, 56)", 1234, 56);
    test("Test 15: calloc(7, 7777)", 7, 7777);

    return 0;
} */