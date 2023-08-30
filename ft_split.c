/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:40:35 by root              #+#    #+#             */
/*   Updated: 2023/08/28 17:25:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_count_words(const char *s, char c)
{
    int count;

    count = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
            count++;
        while (*s && *s != c)
            s++;
    }
    return (count);
}

static char **ft_free_mem(char **result, int last_i)
{
    while (last_i >= 0)
        free (result[last_i--]);
    free (result);
    return (0);
}

char    **ft_split(const char *s, char c)
{
    char    **result;
    int         words;
    int         len;
    int         i;

    words = ft_count_words(s, c);
    result = malloc(sizeof(char *) * (words + 1));
    if (!result)
        return (0);
    i = 0;
    while (i < words)
    {
        while (*s == c)
            s++;
        len = 0;
        while (s[len] && s[len] != c)
            len++;
        result[i] = malloc(len + 1);
        if (!result[i])
            return (ft_free_mem(result, i - 1));
        ft_strlcpy(result[i], s, len + 1);
        s += len;
        i++;
    }
    result[i] = NULL;
    return (result);
}