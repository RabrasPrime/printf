/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:03:37 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/28 13:20:27 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	init_function_table(t_f *functions)
{
	functions[0] = ft_char;
	functions[1] = ft_str;
	functions[2] = ft_pointeur;
	functions[3] = ft_int;
	functions[4] = ft_int;
	functions[5] = ft_unsigned;
	functions[6] = ft_hexamin;
	functions[7] = ft_hexamaj;
}

int count_len(va_list arg, char c)
{
    t_f function[8];
    int j;

    init_function_table(function);
    j = 0;
    while ("cspdiuxX"[j] != c)
        j++;
    if (j < 8)
        return (function[j](0, 0, arg));
    return (2);
}