/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:59:04 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/11 15:27:36 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	char		*i;
	const char	*j;
	size_t		index;

	index = 0;
	i = (char *)dest;
	j = (const char *)src;
	if (dest > src)
	{
		while (n)
		{
			i[n] = j[n];
			n--;
		}
	}
	else
	{
		while (index < n)
		{
			i[index] = j[index];
			index++;
		}
	}
	return (dest);
}
