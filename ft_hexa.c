/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:03:30 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/27 11:10:34 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

static int hex_length(unsigned long nb)
{
    int len = (nb == 0) ? 1 : 0; 
    while (nb > 0) {
        nb /= 16;
        len++;
    }
    return len;
}

int	ft_hexamin(char *str, int i, va_list arg)
{
    int j;
    int nb;

    j = 0;
    nb = va_arg(arg, int);
    while (nb > 16)
    {
        if (str)
        {
            str[i] = "0123456789abcdef"[nb % 16];
            i++;
        }
        j++;
        nb /= 16;
    }
    return (j);
}

int	ft_hexamaj(char *str, int i, va_list arg)
{
    int j;
    int nb;

    j = 0;
    nb = va_arg(arg, int);
    while (nb > 16)
    {
        if (str)
        {
            str[i] = "0123456789ABCDEF"[nb % 16];
            i++;
        }
        j++;
        nb /= 16;
    }
    return (j);
}
