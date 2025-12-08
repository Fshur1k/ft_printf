/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 12:54:40 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/25 17:51:57 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	string_len(int n);

/**
 * @brief Convert integer to string.
 * @param n Integer value.
 * @return Newly allocated string representation.
 */
char	*ft_itoa(int n)
{
	size_t	l;
	char	*str;
	long	num;

	l = string_len(n);
	str = malloc(l + 1);
	if (str == NULL)
		return (NULL);
	num = n;
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	str[l] = '\0';
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--l] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

static size_t	string_len(int n)
{
	size_t	l;
	long	num;

	l = 1;
	num = n;
	if (num < 0)
	{
		l++;
		num = -num;
	}
	while (num > 9)
	{
		num /= 10;
		l++;
	}
	return (l);
}

/* 
int main(void)
{
	int i = -123241;
	char *s = ft_itoa(i);
	printf("%s\n", s);
	free(s);
	return 0;
} */