/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:02:40 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/26 16:14:07 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int let_intmin(char *str, int i)
{
    if (str)
    {
        str[i] = '-';
        str[i + 1] = '2';
    }
    return (2);
}

int	ft_int(char *str, int i, va_list arg)
{
	int	nb;
	int	j;

	j = 0;
	nb = va_arg(arg, int);
    if (nb == -2147483648)
    {
        i += 2;
        j += let_intmin(str, i);
        nb = 147483648;
    }
	while (nb > 9)
	{
		if (str)
		{
			str[i] = (nb % 10) + '0';
			i++;
		}
		j++;
		nb /= 10;
	}
	return (j);
}
