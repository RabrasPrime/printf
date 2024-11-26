/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:04:39 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/26 16:36:49 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "stdarg.h"

int	ft_unsigned(char *str, int i, va_list arg);
int	ft_str(char *str, int i, va_list arg);
int ft_printlen(va_list arg, char *str);
int ft_printf(const char *, ...);
int	ft_pointeur(char *str, int i, va_list arg);
int	ft_int(char *str, int i, va_list arg);
int	ft_hexamin(char *str, int i, va_list arg);
int	ft_hexamaj(char *str, int i, va_list arg);
int	ft_hexamaj(char *str, int i, va_list arg);

#endif