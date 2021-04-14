/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:01:30 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/14 20:53:11 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			precision(t_spf *subesp, va_list argp)
{
	if (*subesp->content == '.')
	{
		subesp->h_p = 1;
		subesp->content++;
		if (!star(subesp, argp))
		{
			subesp->precision = ft_atoi((const char *)subesp->content);
			if (subesp->precision)
				while (*subesp->content >= '0' && *subesp->content <= '9')
					subesp->content++;
		}
	}
}
