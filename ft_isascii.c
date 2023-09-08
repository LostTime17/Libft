/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:31:54 by root              #+#    #+#             */
/*   Updated: 2023/09/08 17:15:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Check if the given character is in ASCII table
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
#include <stdio.h>

int	main(void)
{
	int	T_ascii = 65;
	int	F_ascii = 215;

	if (ft_isascii(T_ascii))
		printf ("T_ascii is in ASCII table\n");
	else
		printf ("T_ascii is not in ASCII table\n");
	if (ft_isascii(F_ascii))
		printf ("F_ascii is in ASCII table\n");
	else
		printf ("F_ascii is not in ASCII table\n");
	return (0);
}
*/