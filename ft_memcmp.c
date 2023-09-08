/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:06:45 by root              #+#    #+#             */
/*   Updated: 2023/09/08 18:22:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compare the first 'n' bytes of 's1' and 's2', return the first difference
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello world!";
	char	str2[] = "Hello wordx!";
	char	str3[] = "Hello!";
	int		result;

	result = ft_memcmp(str1, str2, sizeof(str1));
	printf ("Cmp result between \"%s\" and \"%s\": %d\n", str1, str2, result);
	result = ft_memcmp(str1, str1, sizeof(str1));
	printf ("Cmp result between \"%s\" and \"%s\": %d\n", str1, str1, result);
	result = ft_memcmp(str1, str3, sizeof(str3));
	printf ("Cmp result between \"%s\" and \"%s\": %d\n", str1, str3, result);
	return (0);
}
*/