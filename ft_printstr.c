/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:17:15 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/28 14:57:14 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int add_str(va_list arg, char c, int i, char *dest)
{
    t_f function[8];
    int j;

    init_function_table(function);
    j = 0;
    while ("cspdiuxX"[j] != c)
        j++;
    if (j < 8)
        return (function[j](dest, i, arg));
    dest[i] = '%';
    dest[i + 1] = c;
    return (2);
}

int ft_printstr(va_list arg, char *str, char *dest)
{
    int     count;
    int     i;

    i = 0;
    count = 0;
    while (str[i])
    {
        if(str[i + 1] && str[i] == '%')
            count += add_str(arg, str[++i], count, dest);
        else
        {
            dest[count] = str[i];
            count++;
        }
        i++;
    }
    return (count);
}
