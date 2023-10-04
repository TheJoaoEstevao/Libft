/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:59:15 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 13:24:12 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Function: ft_atoi
    Purpose: Converts a string to an integer.
    How it works:
       - Skips over leading whitespaces and control characters.
       - Detects and handles an optional sign (+/-).
       - Processes subsequent digits to form the integer.
       - Multiplies the result by the sign before returning it.*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (sign * res);
}
/*#include <stdio.h>
int main(void)
{
    printf("Testing ft_atoi function...\n");
    printf("Expected: \"%s\", Result: %d\n", "42", ft_atoi("42"));
    printf("Expected: \"%s\", Result: %d\n", "-42", ft_atoi("-42"));
    printf("Expected: \"%s\", Result: %d\n", "    42", ft_atoi("    42"));
    printf("Expected: \"%s\", Result: %d\n", "\t\n42", ft_atoi("\t\n42"));
    printf("Expected: \"%s\", Result: %d\n", "+42", ft_atoi("+42"));
    printf("Expected: \"%s\", Result: %d\n", "42abc", ft_atoi("42abc"));
    printf("Expected: \"%s\", Result: %d\n", "abc", ft_atoi("abc"));
    printf("Expected: \"%s\", Result: %d\n", "", ft_atoi(""));
    printf("MaxP: \"%s\", Result: %d\n", "2147483647", ft_atoi("2147483647"));
    printf("MaxN: \"%s\", Result: %d\n", "-2147483648", ft_atoi("-2147483648"));
    return 0;
}*/