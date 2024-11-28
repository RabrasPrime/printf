/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:59:40 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/28 15:45:31 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "printf.h"


int ft_printf(const char *, ...)
{
    char    *str;
    char    *dest;
    int     len;
    va_list arg;

    va_start(arg, str);
    len = ft_printlen(arg, str);
    va_end(arg);
    dest = (char *)malloc(sizeof(char) * (len + 1));
    if (!dest)
        return (-1);
    va_start(arg, str);
    len = ft_printstr(arg, str, dest);
    va_end(arg);
    write(1,dest,len);
    free(dest);
    return (len);
}
