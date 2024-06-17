/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:13:01 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/17 08:56:53 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subway;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	subway = malloc(sizeof(char) * (len + 1));
	if (subway == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		subway[i] = s[start];
		i++;
		start++;
	}
	subway[i] = '\0';
	return (subway);
}

//The function allocates and returns a subtring from the string s. 
//It starts at index 'start' and is of max size 'len'.

// #include <stdio.h>
// int main(void)
// {
//     const char *str = "abcdefghi";
//     char *dest = ft_substr(str, 3, 4);
//     printf("%s\n", dest);
// }