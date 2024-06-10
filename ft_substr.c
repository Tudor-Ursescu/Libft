/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:13:01 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/10 15:25:40 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *subway;

    i = 0;
    subway = malloc(sizeof(char) * (len + 1));
    if (subway == NULL)
        return (NULL);
    while (i < len)
    {
        subway[i] = s[start];
        i++;
        start++;
    }
    subway[i] = '\0';
    return (subway);
}

// #include <stdio.h>
// int main(void)
// {
//     const char *str = "abcdefghi";
//     char *dest = ft_substr(str, 1, 4);
//     printf("%s\n", dest);
// }