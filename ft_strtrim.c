/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:38:22 by root              #+#    #+#             */
/*   Updated: 2023/09/08 20:59:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns a new string that is a string 's1' trimmed version
char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*start;
	const char	*end;
	char		*trimmed;
	size_t		len;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, *end))
		end--;
	len = end - start + 1;
	trimmed = malloc(len + 1);
	if (!trimmed)
		return (0);
	ft_strlcpy(trimmed, start, len + 1);
	return (trimmed);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "@@@@Hello world!@@@";
	char	set[] = "@";
	char	*result;

	result = ft_strtrim(str, set);
	if (result)
	{
		printf ("String: \"%s\"\n", str);
		printf ("Trimmed: \"%s\"\n", result);
		free (result);
	}
	else
		printf ("Memory allocation failed.\n");
	return (0);
}
*/