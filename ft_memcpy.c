/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:00:14 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 14:47:27 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Function: ft_memcpy
    Purpose: Copies 'n' bytes from source memory
	 block to destination memory block.
    How it works:
       - Checks if both source and destination
	    pointers are NULL, if true, returns NULL.
       - Casts the input pointers to unsigned char
	    pointers for byte-wise copying.
       - Uses a while loop to copy each byte from
	    source to destination.
       - Decrements 'n' and increments both source
	    and destination pointers each iteration.
       - Returns the original destination pointer.
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
/*#include <stdio.h>
int main(void)
{
    char src[15] = "Hello, World!";
    char dest[15];
    
    ft_memcpy(dest, src, 10);
    dest[10] = '\0';
    printf("Copied string: %s\n", dest);
    return (0);
}*/