/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:01:07 by jopedro3          #+#    #+#             */
/*   Updated: 2023/10/04 13:20:33 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Function: ft_substr
    - Creates a new string (substr) 
	that is a substring of 's'.
    - The substring begins at 'start' 
	and is of maximum size 'len'.
    - Checks for invalid inputs and adjusts 
	'len' if it exceeds the string bounds.
    - Allocates memory for 'substr' and 
	copies characters from 's' to it.
    - Returns the new substring 'substr'.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;
	size_t	i;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*#include <stdio.h>
int main(void)
{
    char *str = "Hello, World!";
    unsigned int start = 7;
    size_t len = 6;
    char *substr = ft_substr(str, start, len);
    if (substr)
    {
        printf("Original: %s\n", str);
        printf("Substring: %s\n", substr);
        free(substr);
    }
    else
        printf("Failed to create a substring.\n");
    return 0;
}*/