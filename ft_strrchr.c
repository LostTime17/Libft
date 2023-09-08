/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:18:11 by root              #+#    #+#             */
/*   Updated: 2023/09/08 20:52:23 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns a pointer to the last occurrence of character 'c' in string 's'
char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "Hello world!";
	char	*result;

	result = ft_strrchr(s, 'l');
	if (result)
		printf ("Last 'l' in \"%s\" is at: %ld\n", s, result - s);
	else
		printf ("Character 'l' not found in \"%s\".\n", s);
	result = ft_strrchr(s, 'x');
	if (result)
		printf ("Last 'x' in \"%s\" is at: %ld\n", s, result - s);
	else
		printf ("Character 'x' not found in \"%s\".\n", s);
	return (0);
}
*/