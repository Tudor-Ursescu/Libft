/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:28:35 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/12 13:37:27 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t start;
	size_t end;
	char 	*str;
	size_t length;
	size_t	i;
	
	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]) && end > (start + 1))
		end--;
	length = end - start + 1;
	str = malloc(sizeof(char) * length);
	i = 0;
	while (i < length)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);	
}
/* 
- returns a copy of 's1' with the chars specified int 'set' removed
from the begining and the end;
-  
*/

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	const char str1[] = "aaHelloaaopaaa";
// 	const char set[] = "a";
	
// 	printf("%s\n", ft_strtrim(str1, set));
// }