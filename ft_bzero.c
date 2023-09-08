/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:39:46 by root              #+#    #+#             */
/*   Updated: 2023/09/08 16:20:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Sets 'n' bytes of memory to 0 at the specified address
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[42] = "Passwords123";
	char	str2[42] = "Passwords234";

	ft_bzero(str1, 12);
	bzero(str2, 12);
	if (memcmp(str1, str2, 42) == 0)
		printf ("Pass!\n");
	else
		printf ("Error!\n");
	return (0);
}
*/