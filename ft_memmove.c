/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:54:23 by root              #+#    #+#             */
/*   Updated: 2023/09/08 18:32:26 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Mostly like ft_memcpy but safely, handle the overlapping
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	if (p_dest < p_src || p_dest >= p_src + n)
	{
		while (n--)
			*p_dest++ = *p_src++;
	}
	else
	{
		p_dest += n;
		p_src += n;
		while (n--)
			*(--p_dest) = *(--p_src);
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest1[20] = "Destination string";
	char	dest2[20] = "Destination string";

	ft_memmove(dest1 + 5, dest1, 7);
	memmove(dest2 + 5, dest2, 7);
	printf ("Result of ft_memmove with overlap: %s\n", dest1);
	printf ("Result of memmove with overlap: %s\n", dest2);
	return (0);
}
*/