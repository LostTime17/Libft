/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:59:49 by root              #+#    #+#             */
/*   Updated: 2023/09/08 17:15:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks if the given character is an alphabet (A-Z, a-z)
int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
#include <stdio.h>

int	main(void)
{
	char	alpha = 'a';
	char	num = '5';

	if (ft_isalpha(alpha))
		printf ("alpha is an alphabet\n");
	else
		printf ("alpha is not an alphabet\n");
	if (ft_isalpha(num))
		printf ("num is an alphabet\n");
	else
		printf ("num is not an alphabet\n");
	return (0);
}
*/