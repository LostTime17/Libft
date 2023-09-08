/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:27:45 by root              #+#    #+#             */
/*   Updated: 2023/09/08 17:15:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks if the given character is alphanumeric (A-Z, a-z, 0-9)
int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	char	alpha = 'w';
	char	num = '4';
	char	other = '%';

	if (ft_isalnum(alpha))
		printf ("alpha is an alphanumeric\n");
	else
		printf ("alpha is not an alphanumeric\n");
	if (ft_isalnum(num))
		printf ("num is an alphanumeric\n");
	else
		printf ("num is not an alphanumeric\n");
	if (ft_isalnum(other))
		printf ("other is an alphanumeric\n");
	else
		printf ("other is not an alphanumeric\n");
	return (0);
}
*/