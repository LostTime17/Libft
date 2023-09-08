/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:24:41 by root              #+#    #+#             */
/*   Updated: 2023/09/08 17:15:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks if the given character is a number (0-9)
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>

int	main(void)
{
	char	num = '4';
	char	alpha = 'R';

	if (ft_isdigit(num))
		printf ("num is a number\n");
	else
		printf ("num is not a number\n");
	if (ft_isdigit(alpha))
		printf ("alpha is a number\n");
	else
		printf ("alpha is not a number\n");
	return (0);
}
*/