/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:00:55 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 14:46:09 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Function: ft_strncmp
    Purpose: Compare two strings up to 'n' characters.
    How it works:
       - Iterates through each character of 
	   both strings, up to 'n' characters.
       - Compares corresponding characters 
	   from the two strings.
       - Stops when a difference is found or 
	   'n' characters have been compared.
       - Returns the difference of the ASCII 
	   values of the first two differing characters.
       - If the strings are equal up to 'n' characters, returns 0.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	while (len < n && (s1[len] || s2[len]))
	{
		if (s1[len] != s2[len])
			return ((unsigned char)s1[len] - (unsigned char)s2[len]);
		len++;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    char *str1 = "Hello, World!";
    char *str2 = "Hello, World!";
    char *str3 = "Hello, Mars!!";
    size_t n = 7;
    if (ft_strncmp(str1, str2, n) == 0)
        printf("First %zu characters of strings are equal.\n", n);
    else
        printf("First %zu characters of strings are NOT equal.\n", n);
    if (ft_strncmp(str1, str3, n) == 0)
        printf("First %zu characters of strings are equal.\n", n);
    else
        printf("First %zu characters of strings are NOT equal.\n", n);
    return 0;
}*/