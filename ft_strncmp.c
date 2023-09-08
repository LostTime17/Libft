/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:28:23 by root              #+#    #+#             */
/*   Updated: 2023/09/08 20:35:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compares at most the first 'n' bytes of string 's1' and 's2'
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf ("Cmp result: %d\n", ft_strncmp("Hello 34", "Hello 12", 8));
	printf ("Cmp result: %d\n", ft_strncmp("Hello", "Hellx", 5));
	printf ("Cmp result: %d\n", ft_strncmp("Hello", "Hello", 5));
	return (0);
}
*/