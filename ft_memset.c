/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:52:25 by root              #+#    #+#             */
/*   Updated: 2023/08/24 22:51:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *p;
    
    p = (unsigned char *)s;
    while (n--)
        *p++ = (unsigned char)c;
    return (s);
}