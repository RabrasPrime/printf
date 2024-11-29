/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:12:15 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/29 13:41:07 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
int main()
{
    char *c = "d";
    ft_printf("ft_printf en int %d, en pointeur %p, en hexamin %x puis maj %X, en str %s et pourcent %%\n", -25, 0, -25, -25, 0);
    printf("printf    en int %d, en pointeur %p, en hexamin %x puis maj %X, en str %s et pourcent %%\n", -25, 0, -25, -25, 0);
}