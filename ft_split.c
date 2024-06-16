/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:06:47 by turescu           #+#    #+#             */
/*   Updated: 2024/06/16 20:32:54 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else if (*s != c)
		{
			words++;
			while (*s != c && *s)
				s++;
		}
	}
	return (words);
}

int	safe_malloc( char **words_v, int position, size_t buffer)
{
	int	i;

	i = 0;
	words_v[position] = malloc(buffer);
	if (words_v[position] == NULL)
	{
		while (i < position)
			free(words_v[i++]);
		free(words_v);
		return (1);
	}
	return (0);
}

int	fill(char **word_v, const char *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		if (*s == c)
			s++;
		else if (*s != c)
		{
			len++;
			while (*s != c && *s)
				s++;
		}
		if (len > 0)
		{
			if (safe_malloc(word_v, i, len + 1))
				return (1);
		}
		ft_strlcpy(word_v[i], s - len, len + 1);
		++i;
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	**word_v;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	word_v = malloc(sizeof(char *) * (words + 1));
	if (word_v == NULL)
		return (NULL);
	word_v[words] = NULL;
	fill(word_v, s, c);
	if (fill(word_v, s, c))
		return (NULL);
	return (word_v);
}

/*
- the function allocates and returns an array of strings obtained
by splitting 's' using the char 'c' as a delimiter.
- the array must end with a NULL pointer;
1) Count the words in 's';
2) Allocate memory for the array of strings/matrix;
3) Coppy the word/token in the correct position
- 27 to iterate trough the whole word, without incrementing 'words' again
*/
#include <stdio.h>
int main (void)
{
	char	*s = "   Hello there, friend!!!";
	char	**v = ft_split(s, ' ');

	while (*v)
	{
		printf("%s\n", *v);
		v++;
	}
}