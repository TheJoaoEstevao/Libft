/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:00:30 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 14:47:43 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Function: ft_putstr_fd
    Purpose: Outputs the string 's'
	 to the given file descriptor 'fd'.
    How it works:
       - Checks if the string 's' is NULL.
	    If it is, the function returns without doing anything.
       - Iterates through each character of the string 's'.
       - Writes each character to the file descriptor 'fd'
	    using the 'write' function.
       - Increments the pointer 's' to move to the next character.
    Note:
       - The 'write' function is used to write data to a file descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*#include <stdio.h>
int main(void)
{
    ft_putstr_fd("Hello, World!", 1);
    ft_putchar_fd('\n', 1);
    ft_putstr_fd(NULL, 1);
    return (0);
}*/