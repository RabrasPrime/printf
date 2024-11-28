/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printflen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:17:57 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/28 10:24:33 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg.h>
#include "printf.h"

int ft_printlen(va_list arg, char *str)
{
    t_f     function[7];
    int     count;
    int     j;
    int     i;

    init_function_table(functions);
    i = 0;
    while (str[i])
    {
        if(str[i + 1] && str[i++] == '%')
        {
            j = 0;
            while ()
        }
    }
}
