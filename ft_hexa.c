/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:03:30 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/27 15:17:15 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

static int hex_length(unsigned int nb)
{
    int len;

    len = 0;
    if (nb == 0)
        len++;
    while (nb > 0) {
        nb /= 16;
        len++;
    }
    return (len);
}

int	ft_hexamin(char *str, int i, va_list arg)
{
    int j;
    int nb;
    int len;

    nb = va_arg(arg, unsigned int);
    len = hex_length(nb);
    j = hex_length(nb);
    if (nb == 0 && str)
        str[i] = '0';
    while (nb != 0)
    {
        if (str)
            str[i + j] = "0123456789abcdef"[nb % 16];
        j--;
        nb /= 16;
    }
    return (len);
}

int	ft_hexamaj(char *str, int i, va_list arg)
{
    int j;
    int nb;
    int len;

    j = 0;
    nb = va_arg(arg, int);
    len = hex_length(nb);
    if (nb == 0 && str)
        str[i] = '0';
    while (nb != 0)
    {
        if (str)
            str[i + j] = "0123456789ABCDEF"[nb % 16];
        j--;
        nb /= 16;
    }
    return (len);
}
