/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:25:53 by root              #+#    #+#             */
/*   Updated: 2023/09/08 17:14:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Calculate the length of characters needed for the int respresent
static int	ft_intlen(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

// Fill the allocated string with the int represent
static void	ft_fill_string(char *s, int n, int len)
{
	if (n == 0)
	{
		s[0] = '0';
		return ;
	}
	if (n < 0)
	{
		s[0] = '-';
		if (n == INT_MIN)
		{
			s[1] = '2';
			n = 147483648;
		}
		else
			n = -n;
	}
	while (n)
	{
		s[--len] = (n % 10) + '0';
		n /= 10;
	}
}

// Convert an integer to its string represent
char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = ft_intlen(n);
	s = malloc(len + 1);
	if (!s)
		return (0);
	s[len] = '\0';
	ft_fill_string(s, n, len);
	return (s);
}

/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	num1 = 425;
	int	num2 = -425;
	int	zero = 0;
	int	int_min = INT_MIN;

	printf ("itoa(%d) = %s\n", num1, ft_itoa(num1));
	printf ("itoa(%d) = %s\n", num2, ft_itoa(num2));
	printf ("itoa(%d) = %s\n", zero, ft_itoa(zero));
	printf ("itoa(%d) = %s\n", int_min, ft_itoa(int_min));
	return (0);
}
*/