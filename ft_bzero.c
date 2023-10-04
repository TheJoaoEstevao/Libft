/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:59:18 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 14:46:30 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Function: ft_bzero
    Purpose: Zeroes the first 'n' bytes of memory area pointed by 's'.
    How it works:
       - Utilizes ft_memset to set 'n' bytes of 's' to 0.
       - Useful for initializing a buffer before use.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*#include <stdio.h>
int main(void)
{
    char str[50] = "42 School is awesome!";
    int i;
    printf("Before ft_bzero: %s\n", str);
    ft_bzero(str, 10);
    printf("After ft_bzero: ");
    i = 0;
    while (i < 20)
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
    return 0;
}*/