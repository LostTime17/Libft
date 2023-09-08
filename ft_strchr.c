/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:10:50 by root              #+#    #+#             */
/*   Updated: 2023/09/08 20:02:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Locate the first occurrence of character 'c' in the string 's'
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello world!";
	char	*result;

	result = ft_strchr(str, 'w');
	if (result)
		printf ("Found 'w' at position: %ld\n", result - str);
	else
		printf ("Character 'w' not found.\n");
	result = ft_strchr(str, '!');
	if (result)
		printf ("Found '!' at position: %ld\n", result - str);
	else
		printf ("Character '!' not found.\n");
	result = ft_strchr(str, '\0');
	if (result)
		printf ("Found '\\0' at position: %ld\n", result - str);
	else
		printf ("Character '\\0' not found.\n");
	return (0);
}
*/