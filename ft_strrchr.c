/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:12:11 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/11 15:45:46 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_length(const char *str)//function used only in this file
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_length(s) - 1;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// int main (void)
// {
// 	char *str = "abgcdefghgij";
// 	char c = '\0';
// 	char *dest;

// 	dest = ft_strrchr(str, c);
// 	printf("%s\n", dest);
// }