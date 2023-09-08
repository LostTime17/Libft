/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:06:24 by root              #+#    #+#             */
/*   Updated: 2023/09/08 21:09:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts an uppercase character to its uppercase equivalent
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	char	up_ch;
	char	low_ch;

	low_ch = 'w';
	up_ch = ft_toupper(low_ch);
	printf ("Before: '%c', After: '%c'\n", low_ch, up_ch);
	return (0);
}
*/