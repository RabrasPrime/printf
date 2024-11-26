/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:01:26 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/26 15:03:50 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_pointeur(char *str, int i, va_list arg)
{
    int j;
    int nb;

    if (str)
    {
        str[i + 1] = '0';
        str[i + 2] = 'x';
    }
    nb = va_arg(arg, int);
    i += 2;
    j = 2;
    while (nb > 16)
    {
        if (str)
        {
            str[i] = "0123456789abcdef"[nb % 16];
            i++;
        }
        j++;
    }
    return (j);
}
