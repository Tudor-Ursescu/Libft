/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:22:50 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/11 15:37:02 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*i;
	const char	*j;
	size_t		index;

	i = (char *)dest;
	j = (const char *)src;
	index = 0;
	if (!dest && !src)
		return (dest);
	while (index < n)
	{
		i[index] = j[index];
		index++;
	}
	return (dest);
}
