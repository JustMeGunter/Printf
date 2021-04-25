/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:00:37 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/25 21:49:53 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			width(t_spf *esp, va_list *argp)
{
	h_zero(esp);
	esp->width = star(esp, argp);
	if (!esp->h_w)
	{
		esp->width = ft_atoi((const char *)esp->cnt);
		if (esp->width)
			while (*esp->cnt >= '0' && *esp->cnt <= '9')
				esp->cnt++;
	}
	//Evaluar aqui el numero
	if (esp->width > 0)
		esp->h
}
