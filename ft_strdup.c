/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:30:54 by root              #+#    #+#             */
/*   Updated: 2023/08/30 18:43:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *dup_s;
	char *start;
	size_t len;

	len = ft_strlen(s);
	dup_s = malloc(len + 1);
	if (!dup_s)
		return (0);
	start = dup_s;
	while (*s)
		*dup_s++ = *s++;
	*dup_s = '\0';
	return (start);
}