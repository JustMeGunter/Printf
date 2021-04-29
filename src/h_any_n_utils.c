/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_any_n_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 18:47:01 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/29 20:16:47 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void	sign_draw(t_spf *esp, int k, char *nn, char c)
{
	if (k)
	{
		if (esp->width < esp->len && esp->zero && esp->plus && !esp->negative)
		{
			esp->count += write(1, "+", 1);
			esp->plus--;
		}
		if (esp->width > esp->len && !esp->h_p && esp->zero && esp->plus &&
				!esp->negative)
		{
			esp->count += write(1, "+", 1);
			esp->plus--;
		}
	}
	else if (!k)
	{
		if (esp->negative)
			esp->count += write(1, "-", 1);
		if (esp->plus && !esp->negative)
			esp->count += write(1, "+", 1);
		if (!(esp->h_w && esp->zero && !esp->h_p))
			hash(esp, c, nn);
	}
}

void	sign(t_spf *esp, char **nn, char c)
{
	if (is_negative(esp, nn) && (!esp->h_p || esp->n_p) && esp->zero &&
			esp->negative--)
		esp->count += write(1, "-", 1);
	if (esp->h_w && esp->zero && !esp->h_p)
		hash(esp, c, *nn);
	if (esp->plus && esp->width > esp->len && !esp->negative && esp->h_p &&
			esp->prcn == 0 && **nn != '0')
		esp->width--;
	else if (esp->plus && esp->width > esp->len && !esp->negative && !esp->h_p)
		esp->width--;
	else if (esp->plus && esp->width > esp->len && !esp->negative && esp->h_p &&
			esp->prcn > 0)
		esp->width--;
	sign_draw(esp, 1, *nn, c);
}
