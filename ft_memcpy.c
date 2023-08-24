/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:44:08 by root              #+#    #+#             */
/*   Updated: 2023/08/24 23:00:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char           *p_dest;
    const unsigned char     *p_src;

    p_dest = (unsigned char *)dest;
    p_src = (const unsigned char *)src;
    while (n--)
        *p_dest++ = *p_src++;
    return (dest);
}