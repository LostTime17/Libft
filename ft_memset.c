/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:52:25 by root              #+#    #+#             */
/*   Updated: 2023/09/08 18:56:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fills the first 'n' bytes of memory area pointed to by 's' with byte 'c'
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}

/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	str1[15] = "Hello world!";
	char	str2[15] = "Hello world!";

	ft_memset(str1, '@', 5);
	printf ("Result of ft_memset: %s\n", str1);
	memset(str2, '@', 5);
	printf ("Result of memset: %s\n", str2);
	return (0);
}
*/