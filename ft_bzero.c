/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 08:48:08 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/10 11:10:27 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n--)
	{
		*ptr++ = 0;
	}
}
//bzero is used to set a block of memory to zero
//*s is a pointer to the starting adress of the memory
//n = the number of bytes to be set to zero
//size_t is an unsigned int type, and we include <stddef.h> header for it
//we iterate over the memory block and set every byte to 0

// int	main(void)
// {
// 	char buffer[10] = "Hello";
// 	printf("Before ft_bzero: %s\n", buffer);

// 	ft_bzero(buffer, 10);

// 	printf("After ft_bzero:");
// 	int i = 0;
// 	while (i < 10)
// 	{
// 		printf("%02x", (unsigned char)buffer[i]);// pirnt in hexadeciaml format to show that all
// 		i++;												//bytes have been set to 0
// 	}
// 	printf("\n");

// 	return (0);
// }

