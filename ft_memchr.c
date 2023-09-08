/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:36:39 by root              #+#    #+#             */
/*   Updated: 2023/09/08 18:12:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Search and return first occurrence 'c' in the first 'n' bytes of 's'
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;

	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*ptr == ch)
			return (ptr);
		ptr++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello world!";
	char	ch1 = 'w';
	char	ch2 = 'x';
	char	*result;

	printf ("This is the str: %s\n", str);
	result = (char *)ft_memchr(str, ch1, sizeof(str));
	if (result)
		printf ("Found character '%c' at position: %ld\n", ch1, result - str);
	else
		printf ("Character '%c' not found.\n", ch1);
	result = (char *)ft_memchr(str, ch2, sizeof(str));
	if (result)
		printf ("Found character '%c' at position: %ld\n", ch2, result - str);
	else
		printf ("Character '%c' not found.\n", ch2);
	return (0);
}
*/