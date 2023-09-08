/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:08:58 by root              #+#    #+#             */
/*   Updated: 2023/09/08 16:27:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Malloc and zeroes memory for an array of 'nmemb' elements, each 'size' bytes
void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	unsigned char	*byte_ptr;
	size_t			total_bytes;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	byte_ptr = (unsigned char *)ptr;
	total_bytes = nmemb * size;
	while (total_bytes--)
		*byte_ptr++ = 0;
	return (ptr);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	int	*arr1;
	int	*arr2;
	size_t	nmemb = 5;
	size_t	size = sizeof(int);

	arr1 = (int *)ft_calloc(nmemb, size);
	arr2 = (int *)calloc(nmemb, size);

	if (memcmp(arr1, arr2, nmemb * size) == 0)
		printf ("Pass!\n");
	else
		printf ("Error!\n");
	free (arr1);
	free (arr2);
	return (0);
}
*/