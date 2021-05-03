/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:43:29 by acrucesp          #+#    #+#             */
/*   Updated: 2021/05/03 20:22:23 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void	draw_precision(t_spf *esp)
{
	if ((esp->zero || (esp->width && esp->prcn) || esp->h_p) && !esp->n_p)
	{
		esp->count += write(1, "0", 1);
		esp->zero = 1;
	}
	else
		esp->count += write(1, " ", 1);
	if (esp->left && esp->width)
		esp->width--;
}
