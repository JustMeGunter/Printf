/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_string.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:36:31 by acrucesp          #+#    #+#             */
/*   Updated: 2021/03/21 20:08:18 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void            h_string(t_spf *subesp, va_list argp)
{
    int         i;
	char		*str;

    i = -1;
	left(subesp);
	width(subesp, argp);
	precision(subesp, argp);
	str = va_arg(argp, char *);
	if (subesp->precision < (subesp->sublen = ft_strlen(str)))
		subesp->sublen = subesp->sublen - subesp->precision;
/* 	else if (subesp->width && subesp->precision)
		subesp->width++;
	if (subesp->width && subesp->left && subesp->sublen <= subesp->precision)
		subesp->width++; */
	if (subesp->width)
	if (!subesp->left)
		while (subesp->width >= subesp->precision && --subesp->width > subesp->sublen)
			draw_width(subesp);
	if (!subesp->h_p || subesp->precision > 0)
		while (str[++i] && (i < subesp->precision || subesp->precision == 0))
			subesp->count += write(1, &str[i], 1);
	if (subesp->left)
		while (subesp->width-- > subesp->sublen && subesp->width > subesp->precision)
			draw_width(subesp);
	empty(subesp);
}