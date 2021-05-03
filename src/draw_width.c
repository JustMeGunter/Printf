/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:45:17 by acrucesp          #+#    #+#             */
/*   Updated: 2021/05/03 20:22:50 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void	draw_width(t_spf *esp)
{
	if (esp->zero && !esp->prcn && esp->n_p && !esp->left)
		esp->count += write(1, "0", 1);
	else if (esp->zero && esp->n_p && !esp->left)
		esp->count += write(1, "0", 1);
	else if (esp->zero && !esp->h_p && !esp->left)
		esp->count += write(1, "0", 1);
	else
		esp->count += write(1, " ", 1);
}
