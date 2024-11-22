/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:01:26 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/22 14:48:59 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_pointer_len(void *p)
{
    unsigned long ptr;
    int           len;

    ptr = (unsigned long)p;
    len = 2;
    if (ptr == 0)
        return (len + 1);
    while (ptr >= 16)
    {
        len++;
        ptr /= 16;
    }
    return (len);
}

int ft_pointer(char *str, void *p)
{
    int i;
    unsigned long ptr;

    ptr = (unsigned long)p;
    i = ft_pointer_len(p) - 1;
    while (i > 1)
    {
        str[i] = "0123456789abcdef"[ptr % 16];
        ptr /= 16;
        i--;
    }
    str[1] = 'x';
    str[0] = '0';
    return (1);
}