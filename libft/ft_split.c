/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 21:33:19 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/25 16:02:04 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c);
static char		**write_words(char **arr, const char *s, size_t words, char c);
static void		*free_array(size_t pos, char **arr);

/**
 * @brief Split string by delimiter.
 * @param s String to split.
 * @param c Delimiter.
 * @return Array of strings terminated by NULL.
 */
char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**arr;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	return (write_words(arr, s, words, c));
}

static size_t	count_words(const char *s, char c)
{
	size_t	in_word;
	size_t	count;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	*free_array(size_t pos, char **arr)
{
	size_t	i;

	i = 0;
	while (pos > i)
	{
		free (arr[i]);
		i++;
	}
	free (arr);
	return (NULL);
}

static char	**write_words(char **arr, const char *s, size_t words, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		arr[j] = ft_substr(s, start, i - start);
		if (!arr[j])
			return (free_array(j, arr));
		j++;
		if (s[i] == '\0')
			break ;
		i++;
	}
	arr[j] = NULL;
	return (arr);
}

/* void print_split(char **arr)
{
    int i = 0;

    while (arr[i] != NULL)
    {
        printf("[%s]\t", arr[i]);
        i++;
    }
}
void free_split(char **arr)
{
    int i = 0;

    while (arr[i] != NULL)
    {
        free(arr[i]);
        i++;
    }
	free(arr);
}
int main(void)
{
	const char str[] = "Thisxisxaxtestxstringx";
	char c = 'x';
	char **arr = ft_split(str, c);
	print_split(arr);
	free_split(arr);
	return (0);
} */