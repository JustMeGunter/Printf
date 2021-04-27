/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:45:17 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/27 15:19:59 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			draw_width(t_spf *esp)
{
	if (esp->zero && !esp->prcn && !esp->left)
		esp->count += write(1, "0", 1);
	else
		esp->count += write(1, " ", 1);
}
