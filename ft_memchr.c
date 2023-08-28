/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:36:39 by root              #+#    #+#             */
/*   Updated: 2023/08/27 16:06:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *ptr;
    unsigned char       ch;

    ptr = (unsigned char *)s;
    ch = (unsigned char)c;
    while (n--)
    {
        if (*ptr == ch)
            return (ptr);
        ptr++;
    }
    return (0);
}