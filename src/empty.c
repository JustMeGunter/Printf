/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:02:13 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/24 15:48:15 by acrucesp         ###   ########.fr       */
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
	subesp->h_w = 0;
	subesp->n_p = 0;
}
