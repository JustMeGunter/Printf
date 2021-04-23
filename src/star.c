/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   star.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 12:40:12 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/23 19:50:11 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

int				star(t_spf *subesp, va_list *argp)
{
	int		val;

	h_zero(subesp);
	if (*subesp->content == '*')
	{
		subesp->content++;
		if ((val = va_arg(*argp, int)) < 0)
		{
			subesp->left = 1;
			val = -val;
			subesp->negative = 1;
		}
		if (!subesp->width && !subesp->h_p)
			subesp->width = val;
		else if (subesp->negative)
		{
			subesp->precision = 0;
			subesp->n_p = 1;
		}
		else
		{
			subesp->precision = val;
			subesp->n_p = 0;
		}
		subesp->negative = 0;
		return (1);
	}
	return (0);
}
