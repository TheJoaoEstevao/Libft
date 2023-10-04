/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:01:15 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 13:20:56 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Function: ft_toupper
    - Converts a lowercase character to uppercase.
    - Checks if 'c' is a lowercase letter (between 'a' and 'z').
    - If true, subtracts 32 from 'c' to convert it to uppercase.
    - Returns the possibly modified character 'c'.
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*#include <stdio.h>
int main(void)
{
    int c = 'a';
    int upper_c = ft_toupper(c); 
    printf("Original: %c\n", c);
    printf("Uppercase: %c\n", upper_c);
    return 0;
}*/