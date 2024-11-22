/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:01:41 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/21 15:06:40 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_realloc(char *src,char *src2, int size, int first)
{
    char    *strnew;
    size_t  i;
    size_t  j;

    strnew = (char*)malloc(sizeof(char) * (ft_strlen(src) + ft_strlen(src2) + 1));
    if (!strnew)
        return (NULL);
    i = 0;
    while (i < size && src[i])
    {
        strnew[i] = src[i];
        i++;
    }
    j = 0;
    while (src2[j])
    {
        strnew[i] = src2[j];
        j++;
        i++;
    }
    strnew[i] = '\0';
    if (first)
        free(src);
    free(src2);
    return (strnew);
}