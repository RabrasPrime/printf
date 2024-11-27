/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printflen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:17:57 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/27 17:27:14 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg.h>
#include "printf.h"

int ft_printlen(va_list arg, char *str)
{
    int (*f[7])(char *, int, va_list) = {ft_unsigned, ft_str, ft_char, ft_int, ft_pointeur, ft_hexamaj, ft_hexamin};
}
