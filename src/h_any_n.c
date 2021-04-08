/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_any_n.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:41:03 by acrucesp          #+#    #+#             */
/*   Updated: 2021/03/21 18:54:52 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void			h_any_n(t_spf *subesp, va_list argp, char c)
{
	char		*nn;
	int			i;

	i = -1;
	left(subesp);
	width(subesp, argp);
	precision(subesp, argp);
	if (!c)
		nn = ft_itoa(va_arg(argp, int));
	else
		nn = is_pnt_or_h(subesp, va_arg(argp, long unsigned int), c);
	is_negative(subesp, &nn);
	subesp->sublen = ft_strlen(nn);
	if (subesp->width && subesp->precision && !subesp->left)
		subesp->width++;
	if (!subesp->left)
		while (subesp->width-- > subesp->sublen && subesp->width > subesp->precision)
			draw_width(subesp);
	if (subesp->negative)
		subesp->count += write(1, "-", 1);
	while (subesp->precision-- > subesp->sublen && subesp->precision > 0)
		draw_precision(subesp);
	if (c == 'p')
		subesp->count += write(1, "0x", 2);
	while (nn[++i])
		subesp->count += write(1, &nn[i], 1);
	if (subesp->left)
		while (subesp->width-- > subesp->sublen && subesp->width > subesp->precision)
			draw_width(subesp);
	empty(subesp);
}