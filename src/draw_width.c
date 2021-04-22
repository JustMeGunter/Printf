/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:45:17 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/22 20:18:06 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			draw_width(t_spf *subesp)
{
	if (subesp->zero && !subesp->precision && !subesp->left)
		subesp->count += write(1, "0", 1);
	else
		subesp->count += write(1, " ", 1);
}
