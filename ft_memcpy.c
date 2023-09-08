/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:44:08 by root              #+#    #+#             */
/*   Updated: 2023/09/08 18:26:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy 'n' bytes from 'src' to 'dest', and return the 'dest' pointer
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	while (n--)
		*p_dest++ = *p_src++;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Hello world!";
	char	dest1[20];
	char	dest2[20];

	ft_memcpy(dest1, src, sizeof(src));
	printf ("Source using ft_memcpy: %s\n", src);
	printf ("Destination using ft_memcpy: %s\n", dest1);
	memcpy(dest2, src, sizeof(src));
	printf ("Source using memcpy: %s\n", src);
	printf ("Destination using memcpy: %s\n", dest2);
	return (0);
}
*/