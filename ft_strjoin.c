/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:47:05 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/11 15:44:42 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*result;
	int		length;

	i = -1;
	j = 0;
	length = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	while (s1[++i])
		result[i] = s1[i];
	while (s2[j])
		result[i++] = s2[j++];
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *str1 = "Hello";
// 	char *str2 = "world";

// 	char  *res = ft_strjoin(str1, str2);
// 	printf("%s", res);
// 	free(res);
// 	return (0);
// }
