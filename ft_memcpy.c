/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchartp <chchartp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:44:08 by root              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/10/04 12:18:57 by root             ###   ########.fr       */
=======
<<<<<<< HEAD
/*   Updated: 2023/10/03 15:02:55 by chchartp         ###   ########.fr       */
=======
/*   Updated: 2023/09/22 01:54:13 by root             ###   ########.fr       */
>>>>>>> fad8b320c8ace44d6c5c1d9f5ccd85e6ee418c14
>>>>>>> bfef7b069d83e447f92f1f94929af5982beb1fe3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy 'n' bytes from 'src' to 'dest', and return the 'dest' pointer
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	if (!dest || !src)
		return (dest);
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	while (n--)
		*p_dest++ = *p_src++;
	return (dest);
}
