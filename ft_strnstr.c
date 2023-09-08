/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:25:26 by root              #+#    #+#             */
/*   Updated: 2023/09/08 20:47:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Searches for the substring 'needle' in the 'haystack' at 'len' bytes
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (i <= (len - needle_len) && haystack[i])
	{
		if (haystack[i] == *needle)
		{
			if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*hst = "Hello world!";
	char	*needle;
	char	*result;

	needle = "world";
	result = ft_strnstr(hst, needle, ft_strlen(hst));
	if (result)
		printf ("Found '%s' in '%s' at: %ld\n", needle, hst, result - hst);
	else
		printf ("Did not find '%s' in '%s'\n", needle, hst);
	needle = "apple";
	result = ft_strnstr(hst, needle, ft_strlen(hst));
	if (result)
		printf ("Found '%s' in '%s' at: %ld\n", needle, hst, result - hst);
	else
		printf ("Did not find '%s' in '%s'\n", needle, hst);
	return (0);
}
*/