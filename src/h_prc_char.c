/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_prc_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:12:02 by acrucesp          #+#    #+#             */
/*   Updated: 2021/03/21 15:33:57 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void			h_prc_char(t_spf *subesp, va_list argp, char percent)
{
	int         i;
	char		character;

    i = -1;
	left(subesp);
	width(subesp, argp);
	precision(subesp, argp);
	if (!percent)
		character = va_arg(argp, int);
	else
		 character = percent;
	subesp->sublen = 1;
	if (subesp->width && subesp->precision)
		subesp->width++;
	if (!subesp->left)
		while (subesp->width-- > subesp->sublen && subesp->width > subesp->precision)
			draw_width(subesp);
	/* if (character && (i < subesp->precision || subesp->precision == 0)) */
	subesp->count += write(1, &character, 1);
	if (subesp->left)
		while (subesp->width-- > subesp->sublen && subesp->width > subesp->precision)
			draw_width(subesp);
	empty(subesp);
}