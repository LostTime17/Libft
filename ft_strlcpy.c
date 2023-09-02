/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 19:05:38 by root              #+#    #+#             */
/*   Updated: 2023/09/02 16:55:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (src[len] && len < size - 1)
	{
		dest[len] = src[len];
		len++;
	}
	if (size != 0)
		dest[len] = '\0';
	while (src[len])
		len++;
	return (len);
}
