/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:59:31 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/21 20:48:58 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			left(t_spf *subesp)
{
	h_zero(subesp);
	if (*subesp->content == '-')
	{
		subesp->content++;
		subesp->left = 1;
	}
}
