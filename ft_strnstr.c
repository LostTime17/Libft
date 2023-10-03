/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchartp <chchartp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:25:26 by root              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/10/03 14:44:05 by chchartp         ###   ########.fr       */
=======
/*   Updated: 2023/09/22 01:42:06 by root             ###   ########.fr       */
>>>>>>> fad8b320c8ace44d6c5c1d9f5ccd85e6ee418c14
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

<<<<<<< HEAD
=======
	if (!haystack || !needle)
		return (NULL);
>>>>>>> fad8b320c8ace44d6c5c1d9f5ccd85e6ee418c14
	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i + needle_len <= len)
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
