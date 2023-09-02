/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:16:46 by root              #+#    #+#             */
/*   Updated: 2023/09/02 15:31:11 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(long result, int sign, char current)
{
	if (result > INT_MAX / 10)
	{
		if (sign == 1)
			return (INT_MAX);
		else
			return (INT_MIN);
	}
	else if (result == INT_MAX / 10 && current - '0' > INT_MAX % 10)
	{
		if (sign == 1)
			return (INT_MAX);
		else
			return (INT_MIN);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	int		overflow_result;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		overflow_result = check_overflow(result, sign, *str);
		if (overflow_result != 0)
			return (overflow_result);
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}
