/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:02:13 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/28 21:34:17 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			empty(t_spf *esp)
{
	esp->left = 0;
	esp->zero = 0;
	esp->width = 0;
	esp->h_p = 0;
	esp->prcn = 0;
	esp->len = 0;
	esp->h_w = 0;
	esp->n_p = 0;
	esp->negative = 0;
	esp->space = 0;
	esp->plus = 0;
	esp->hash = 0;
}
