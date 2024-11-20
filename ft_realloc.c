/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:01:41 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/20 15:12:34 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_realloc(char *src,char *src2, int size)
{
    char    *strnew;
    size_t  i;

    strnew = (char*)malloc(sizeof(char) * (ft_strlen(src) + ft_strlen(src2) + 1));
    if (!strnew)
        return (NULL);

}