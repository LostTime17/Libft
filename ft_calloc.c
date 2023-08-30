/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:08:58 by root              #+#    #+#             */
/*   Updated: 2023/08/28 14:11:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void            *ptr;
    unsigned char   *byte_ptr;
    size_t              total_bytes;

    ptr = malloc(nmemb * size);
    if (!ptr)
        return (0);
    byte_ptr = (unsigned char *)ptr;
    total_bytes = nmemb * size;
    while (total_bytes--)
        *byte_ptr++ = 0;
    return (ptr);
}