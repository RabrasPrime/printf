/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:59:40 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/22 12:27:20 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdarg.h"

int ft_printf(const char *, ...)
{
    char * str;
    va_list arg;
    va_list cpy;

    va_start(arg, str);
    va_copy(cpy, arg);
    
    va_end(arg);
    
}