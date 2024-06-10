/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:24:08 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/10 10:50:51 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;
	int	count;

	sign = 1;
	nb = 0;
	count = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (*str - '0') + (nb * 10);
		str++;
	}
	if (count > 1)
		return (0);
	return (nb * sign);
}

// int main(void)
// {
//     char str[] = "++323";
//     printf("my atoi %d \n", ft_atoi(str));
//     printf("man atoi %d", atoi(str));
// }