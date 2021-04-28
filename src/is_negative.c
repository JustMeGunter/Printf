/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:02:11 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/28 13:11:55 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

int	is_negative(t_spf *esp, char **nn)
{
	if (**nn == '-')
	{
		esp->negative = 1;
		(*nn)++;
		if (esp->width > esp->prcn && esp->h_p)
		{
			esp->len--;
			esp->width--;
		}
		else if (esp->width ==  esp->prcn && esp->h_p)
			esp->len--;
		if (esp->h_p && esp->prcn > esp->width)
			esp->prcn++;
		return (1);
	}
	else
		return (0);
}
