/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:16:50 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/25 15:45:43 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Apply function to each char (in-place, iterate).
 * @param s Input string (modifiable).
 * @param f Function to apply.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* void to_upper(unsigned int i, char *c)
{
    (void)i;
    *c = ft_toupper(*c);
} */
/* 
int main(void)
{
	char str[] = "small string small problem";
	printf("%s\n", str);
	ft_striteri(str,to_upper);
	printf("%s\n", str);
	return 0;
} */
