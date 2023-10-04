/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:58:55 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 14:47:35 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Function: ft_putchar_fd
    Purpose: Writes a single character to a given file descriptor.
    How it works:
       - Utilizes the write system call.
       - Writes the character (c) to the file descriptor (fd).
       - Only writes 1 byte since it's a single character.
    Note: 
       - File descriptor (fd) is an integer representing an open file.
         - 0: Standard Input
         - 1: Standard Output
         - 2: Standard Error
       - Custom file descriptors can be used for file operations.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <stdio.h>
int main(void)
{
    ft_putchar_fd('A', 1);
    ft_putchar_fd('\n', 1); 
    return (0);
}*/