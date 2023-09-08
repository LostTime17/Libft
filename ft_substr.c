/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:09:56 by root              #+#    #+#             */
/*   Updated: 2023/09/08 21:04:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Extracts a substring from 's', begin at 'start' until 'len' or end of string
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;

	if (start >= ft_strlen(s))
	{
		sub_s = malloc(1);
		if (sub_s)
			*sub_s = '\0';
		return (sub_s);
	}
	sub_s = malloc(sizeof(char) * (len + 1));
	if (!sub_s)
		return (0);
	i = 0;
	while (i < len && s[start])
	{
		sub_s[i] = s[start];
		i++;
		start++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}

/*
#include <stdio.h>

int	main(void)
{
	const char		str[] = "Hello world!";
	unsigned int	start = 7;
	size_t			len = 5;
	char			*result;

	result = ft_substr(str, start, len);
	if (result)
	{
		printf ("String: \"%s\"\n", str);
		printf ("Substring: \"%s\"\n", result);
		free (result);
	}
	else
		printf ("Memory allocation failed.\n");
	return (0);
}
*/