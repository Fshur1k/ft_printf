/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:14:54 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/19 17:23:34 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Convert string to integer.
 * @param str Input string.
 * @return Converted integer.
 */
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

/* void    test(const char *input)
{
    int std = atoi(input);
    int ft = ft_atoi(input);

    printf("--------------------------------------------------\n");
    printf("INPUT: \"%s\"\n", input);
    printf("atoi:      %d\n", std);
    printf("ft_atoi:   %d\n", ft);

    if (std == ft)
        printf("RESULT:    OK\n");
    else
        printf("RESULT:    MISMATCH\n");
}

int main(void)
{
    // Basic numbers
    test("0");
    test("42");
    test("-42");
    test("+42");
    test("123456");
    test("-999999");

    // Spaces
    test("   123");
    test("\t\n\v\f\r  456");
    test("   -789");
    test("   +987");

    // Mixed cases
    test("123abc");
    test("   456 789");
    test("-12abc34");
    test("+00099");

    // Just signs
    test("-");
    test("+");
    test("  -");
    test("  +");

    // Overflow (undefined, but compare anyway)
    test("2147483647");    // INT_MAX
    test("-2147483648");   // INT_MIN
    test("2147483648");    // overflow
    test("-2147483649");   // underflow
    test("99999999999999999999999999");  // large positive
    test("-99999999999999999999999999"); // large negative

    // Weird cases
    test("");
    test("    ");
    test("a123");
    test("--123");
    test("+-123");
    test("++123");
    test("  + 123");
    test("  - 123");
	test("-0012a42");
	test("0-1");
	test(" \t\n\v\f\r  -12");

    return (0);
}*/