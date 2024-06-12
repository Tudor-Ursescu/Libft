/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:22:50 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/12 13:28:49 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*mdest;
	const char	*msrc;
	size_t		i;

	mdest = (char *)dest;
	msrc = (const char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < len)
	{
		mdest[i] = msrc[i];
		i++;
	}
	return (dest);
}
/*
-difference between memmove and this is that memmove doesn't
allow memory overlapping
*/