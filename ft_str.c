/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:54:17 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/27 16:58:35 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_str(char *str, int i, va_list arg)
{
	int		j;
	char	*s;

	s = va_arg(arg, char *);
	j = 0;
	while (s[j])
	{
		if (str)
		{
			str[i] = s[j];
			i++;
		}
		j++;
	}
	return (j);
}
