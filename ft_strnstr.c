/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:25:26 by root              #+#    #+#             */
/*   Updated: 2023/09/05 17:13:17 by root             ###   ########.fr       */
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
