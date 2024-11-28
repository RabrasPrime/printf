/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:04:39 by tjooris           #+#    #+#             */
/*   Updated: 2024/11/28 10:04:39 by tjooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "stdarg.h"

typedef int (*t_f)(char *, int, va_list);

int	    ft_unsigned(char *str, int i, va_list arg);
int	    ft_str(char *str, int i, va_list arg);
int	    ft_char(char *str, int i, va_list arg);
/*int	ft_printlen(va_list arg, char *str);*/
/*int ft_printf(const char *, ...);*/
int	    ft_pointeur(char *str, int i, va_list arg);
int	    ft_int(char *str, int i, va_list arg);
int	    ft_hexamin(char *str, int i, va_list arg);
int	    ft_hexamaj(char *str, int i, va_list arg);
void	init_function_table(t_f *functions);

#endif
