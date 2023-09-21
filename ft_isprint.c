/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:43:45 by root              #+#    #+#             */
/*   Updated: 2023/09/22 01:50:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Check if the given character is printable (ASCII 32 - 126)
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
