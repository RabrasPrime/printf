/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:03:37 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/22 15:26:31 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	nb_len(long long nb)
{
	size_t	num;

	num = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		num++;
	}
	if (nb == 0)
		num++;
	else
	{
		while (nb)
		{
			nb = nb / 10;
			num++;
		}
	}
	return (num);
}

int	ft_unsigned_nb(char *str, unsigned int nb)
{
	int	i;
	
	i = nb_len((long long)nb);
	while (i)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	return (1);
}