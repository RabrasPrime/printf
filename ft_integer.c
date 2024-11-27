/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:02:40 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/27 14:30:22 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	int_len(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i = 1;
	while (nb != 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int	ft_int(char *str, int i, va_list arg)
{
	int	j;
	int nb;
	int	signe;
	int len;

	nb = va_arg(arg, int);
	len = int_len(nb);
	signe = 0;
	if (nb == 0 && str)
		str[i] = '0';
	if (nb < 0 && str)
	{
		str[i++] = '-';
		signe = 1;
	}
	j = int_len(nb);
	while (nb != 0)
	{
		if (str);
			str[i + j - signe] = (nb % 10) + '0';
		j--;
		nb /= 10;
	}
	return (len);
}


