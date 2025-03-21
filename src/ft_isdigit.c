/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:57:20 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/20 11:12:22 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test_chars[] = {'a', 'Z', '5', '!', ' ',
					//  '\n', 'b', '1', 'G', '*', '0'};
// 	int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
// 	int i = 0;
// 	while (i < num_tests)
// 	{
// 		char ch = test_chars[i];
// 		int result = ft_isdigit(ch);

// 		if (result)
// 			printf("Character '%c' is a digit.\n", ch);
// 		else 
// 			printf("Character '%c' is not a digit.\n", ch);
// 		i++;
// 	}
// 	return (0);
// }