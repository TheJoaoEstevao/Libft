/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:59:21 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 12:30:04 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Function: ft_calloc
    Purpose: Allocates and zero-initializes memory for an array.
    How it works:
       - Calculates total memory size by multiplying 'count' and 'size'.
       - Allocates this size of memory using malloc.
       - If allocation fails (malloc returns NULL), returns NULL.
       - If successful, uses ft_memset to set all bits of this memory to zero.
       - Returns a pointer to the first byte of this memory.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, count * size);
	return (memory);
}
/*#include <stdio.h>
int main(void)
{
    // Using ft_calloc to allocate and zero-initialize an array of 5 integers
    int *arr = (int *)ft_calloc(5, sizeof(int));
    
    if (!arr)
    {
        printf("Memory allocation failed!\n");
        return (1);
    }
    printf("Array elements: ");
    size_t i = 0;
    while (i < 5)
    {
        printf("%d ", arr[i]);  // Expecting: 0 0 0 0 0 
        i++;
    }
    printf("\n");
    free(arr);
    return 0;
}*/