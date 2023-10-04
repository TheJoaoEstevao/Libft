/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:59:40 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 14:46:50 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Function: ft_itoa
    Purpose: Convert an integer to a string.
    How it works:
       - Uses ft_count to calculate the digit count in 'n'.
       - Allocates memory for the resulting string.
       - If 'n' is zero, assigns '0' to the string and returns.
       - If 'n' is not zero, uses ft_fill_str to populate the string.
       - Returns the resulting string.  
	     
    Helper Function: ft_count
    Purpose: Determine the digit count in an integer.
    How it works:
       - Initializes a counter to 0.
       - Returns 1 if 'n' is zero (since it has one digit).
       - Increments the counter for each digit in 'n'.
       - Returns the count.
	   
    Helper Function: ft_fill_str
    Purpose: Populate the allocated string with digits.
    How it works:
       - Assigns 'sign' to -1 if 'n' is negative, otherwise 1.
       - Fills the string with digits from right to left.
       - Divides 'n' by 10 to move to the next digit.
       - Sets the first character to '-' if 'sign' is -1.
*/

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_fill_str(char *str, int n, int len)
{
	int	sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	while (n)
	{
		len--;
		str[len] = '0' + sign * (n % 10);
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_count(n);
	if (n < 0)
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else
		ft_fill_str(str, n, len);
	return (str);
}
/*#include <stdio.h>
int main(void)
{
    int test_num1 = 42;
    int test_num2 = -42;
    int test_num3 = 0;
    char *str1 = ft_itoa(test_num1);
    char *str2 = ft_itoa(test_num2);
    char *str3 = ft_itoa(test_num3);
    printf("Number: %d, String: %s\n", test_num1, str1);
    printf("Number: %d, String: %s\n", test_num2, str2);
    printf("Number: %d, String: %s\n", test_num3, str3);
    free(str1);
    free(str2);
    free(str3);
    return 0;
}*/