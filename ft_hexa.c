/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:03:30 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/22 14:58:19 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int hexa_len(int nb)
{
    int count;

    count = 1;
    while (nb >= 16)
    {
        count++;
        nb /= 16;
    }
    return (count);
}

int hexa_min(char *str, int nb)
{
    int i;

    i = hexa_len(nb);
    while (i)
    {
        str[i] = "0123456789abcdef"[nb % 16];
        nb /= 16;
        i--;
    }
    return (1);
}

int hexa_maj(char *str, int nb)
{
    int i;

    i = hexa_len(nb);
    while (i)
    {
        str[i] = "0123456789ABCDEF"[nb % 16];
        nb /= 16;
        i--;
    }
    return (1);
}