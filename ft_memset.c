/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:55:42 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/10 17:16:13 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t len)
{
    char *i;
	
    i = (char *)s;
    while (len > 0)
    {
        *i = c;
		i++;
		len--;
    }
	return (s);
}

#include <stdio.h>
int main(void)
{
    char src[30] = "Hello george";
	printf("%s\n", src);
	
	ft_memset(src, '$', sizeof(char) * 5);
	printf("%s\n", src);

	int arr[10];

	ft_memset(arr, 0, sizeof(int) * 10);
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	return (0);
	
}