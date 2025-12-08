/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:22:23 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/25 16:08:38 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_char(const char *s, int n)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == n)
			return (1);
		i++;
	}
	return (0);
}

/**
  * @brief Remove characters from string that are in set.
  * @param s Trimmed string.
  * @param set Characters to be removed.
  * @return Trimmed string or NULL.
  **/
char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	l_tr_str;
	char	*trim_str;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] && find_char(set, s[start]))
		start++;
	end = ft_strlen(s) - 1;
	while (end > start && find_char(set, s[end]))
		end--;
	l_tr_str = end - start;
	trim_str = ft_substr(s, start, l_tr_str + 1);
	if (trim_str == NULL)
		return (NULL);
	return (trim_str);
}
/* 
int main(void)
{
	const char str[] = "";
	const char set[] = "abs";
	printf("%s\n", str);
	char *trimed = ft_strtrim(str, set);
	printf("%s", trimed);
	free(trimed);
	return 0;
} */