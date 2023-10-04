/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:59:36 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 14:46:47 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Function: ft_isdigit
    Purpose: Check if a character is a digit (0-9).
    How it works:
       - Checks if 'c' is within the ASCII range for digits (48 to 57).
       - Returns 1 if 'c' is a digit, otherwise 0.
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*#include <stdio.h>
int main(void)
{
    int test_char1 = '3';  // a digit
    int test_char2 = 'a';  // not a digit
    int test_char3 = '9';  // a digit

    printf("Is '%c' a digit? (Expect 1): %d\n",
	 test_char1, ft_isdigit(test_char1));
    printf("Is '%c' a digit? (Expect 0): %d\n",
	 test_char2, ft_isdigit(test_char2));
    printf("Is '%c' a digit? (Expect 1): %d\n",
	 test_char3, ft_isdigit(test_char3));
    return 0;
}*/