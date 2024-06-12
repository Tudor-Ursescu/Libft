/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:59:04 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/12 13:33:46 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*mdest;
	const char	*msrc;
	size_t		i;

	mdest = (char *)dest;
	msrc = (const char *)src;
	if (dest <= src)
	{
		i = 0;
		while (i < len)
		{
			mdest[i] = msrc[len];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			mdest[i] = msrc[i];
		}
	}
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *src = "hello";
// 	char dst[10];

// 	ft_memmove(dst, src, sizeof(src));

// 	printf("%s\n", dst);

// 	return (0);
// }