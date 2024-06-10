/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:43:44 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/10 14:08:45 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (small[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (small[j] == big[i + j] && (i + j) < len)
		{
			if (small[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*big_str = "Foo Bar Baz";
// 	const char	*small_str = "Bar";
	
// 	char *ptr = ft_strnstr(big_str, small_str, 10);
// 	printf("%s\n", ptr);
// }
