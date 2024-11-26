/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:03:37 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/26 16:02:06 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_unsigned(char *str, int i, va_list arg)
{
	unsigned int	nb;
	int				j;	
	
	j = 0;
	nb = va_arg(arg, unsigned int);
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
