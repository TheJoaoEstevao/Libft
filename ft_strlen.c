/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:00:51 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 13:17:06 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Function: ft_strlen
    Purpose: Calculates the length of a string.
    How it works:
        1. Initializes a counter (len) to 0.
        2. Iterates through each character of the string (s).
        3. Increments the counter (len) until the null-terminator is encountered.
        4. Returns the counter as the length of the string.
*/
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/*#include <stdio.h>
int main(void)
{
    char *str = "42School";
    size_t length;
    length = ft_strlen(str);
    printf("Length of '%s': %zu\n", str, length);
    return 0;
}*/