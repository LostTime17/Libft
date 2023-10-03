/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchartp <chchartp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:44:08 by root              #+#    #+#             */
/*   Updated: 2023/10/03 15:02:55 by chchartp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy 'n' bytes from 'src' to 'dest', and return the 'dest' pointer
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	if (!dest || !src)
		return (NULL);
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	while (n--)
		*p_dest++ = *p_src++;
	return (dest);
}
