/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:06:45 by root              #+#    #+#             */
/*   Updated: 2023/08/27 16:17:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *ptr1;
    unsigned char   *ptr2;
    
    ptr1 = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;
    while (n--)
    {
        if (*ptr1 != *ptr2)
            return (*ptr1 - *ptr2);
        ptr1++;
        ptr2++;
    }
    return (0);
}