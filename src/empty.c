/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:02:13 by acrucesp          #+#    #+#             */
/*   Updated: 2021/03/21 16:48:58 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void			empty(t_spf *subesp)
{
	subesp->left = 0;
	subesp->zero = 0;
	subesp->width = 0;
	subesp->h_p = 0;
	subesp->precision = 0;
	subesp->sublen = 0;
	subesp->negative = 0;
}