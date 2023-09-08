/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:45:56 by root              #+#    #+#             */
/*   Updated: 2023/09/08 20:24:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns the length of the string 's', excluding the null-terminating
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	str[15] = "Hello world!";
	int			str_length;

	str_length = ft_strlen(str);
	printf ("String length: %u\n", str_length);
	return (0);
}
*/