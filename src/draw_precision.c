/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:43:29 by acrucesp          #+#    #+#             */
/*   Updated: 2021/03/20 20:55:55 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void			draw_precision(t_spf *subesp)
{
	if (subesp->zero || (subesp->width && subesp->precision))
		subesp->count += write(1, "0", 1);
	else
		subesp->count += write(1, " ", 1);
	if (subesp->left && subesp->width)
		subesp->width--;
}