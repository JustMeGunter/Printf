/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 17:09:13 by acrucesp          #+#    #+#             */
/*   Updated: 2021/03/21 18:10:50 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void            is_negative(t_spf *subesp, char **nn)
{
	if (**nn == '-')
	{
        (*nn)++;
        subesp->negative = 1;
        if (subesp->width)
			subesp->width--;
	}
}