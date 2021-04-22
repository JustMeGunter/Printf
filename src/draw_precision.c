/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:43:29 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/22 20:18:11 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void			draw_precision(t_spf *esp)
{
	if (esp->zero || (esp->width && esp->precision))
		esp->count += write(1, "0", 1);
	else
		esp->count += write(1, " ", 1);
	if (esp->left && esp->width)
		esp->width--;
}
