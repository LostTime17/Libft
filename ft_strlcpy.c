/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 19:05:38 by root              #+#    #+#             */
/*   Updated: 2023/09/09 12:51:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies up to 'size' - 1 characters from 'src' to 'dest', null-terminating
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (size != 0)
	{
		while (src[len] && len < size - 1)
		{
			dest[len] = src[len];
			len++;
		}
		dest[len] = '\0';
	}
	while (src[len])
		len++;
	return (len);
}

/*
#include <stdio.h>

int	main(void)
{
	char		dest[10];
	const char	*src = "Hello world!";
	size_t		result;

	result = ft_strlcpy(dest, src, sizeof(dest));
	printf ("Destination: %s\n", dest);
	printf ("Total length of source: %zu\n", result);
	return (0);
}
*/