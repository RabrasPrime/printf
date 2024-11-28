/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:01:26 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/28 15:29:41 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

static int	hex_length(unsigned long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

void add0x(char *str, int i)
{
	str[i] = '0';
	str[i + 1] = 'x';
}

int add0(char *str, int i)
{
	str[i + 2] = '0';
	return (3);
}

int	ft_pointeur(char *str, int i, va_list arg)
{
	int				j;
	int				len;
	unsigned long	nb;

	nb = va_arg(arg, unsigned long);
	if (str)
		add0x(str, i);
	if (nb == 0)
		return (add0(str, i));
	len = hex_length(nb);
	j = len - 1;
	while (nb > 0)
	{
		if (str)
			str[i + j + 2] = "0123456789abcdef"[nb % 16];
		nb /= 16;
		j--;
	}
	return (len + 2);
}
