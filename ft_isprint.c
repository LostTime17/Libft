/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:43:45 by root              #+#    #+#             */
/*   Updated: 2023/09/08 17:14:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Check if the given character is printable (ASCII 32 - 126)
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
#include <stdio.h>

int	main(void)
{
	int	T_char = 65;
	int	F_char = 128;

	if (ft_isprint(T_char))
		printf ("T_char is a printable\n");
	else
		printf ("T_char is not a printable\n");
	if (ft_isprint(F_char))
		printf ("F_char is a printable\n");
	else
		printf ("F_char is not a printable\n");
	return (0);
}
*/