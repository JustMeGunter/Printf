/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:00:37 by acrucesp          #+#    #+#             */
/*   Updated: 2021/03/20 16:26:33 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void			width(t_spf *subesp, va_list argp)
{
	if (!star(subesp, argp))
	{
		subesp->width = ft_atoi((const char *)subesp->content);
		if (subesp->width)
			while (*subesp->content >= '0' && *subesp->content <= '9')
				subesp->content++;
	}
}