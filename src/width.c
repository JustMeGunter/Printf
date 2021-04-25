/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:00:37 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/25 20:46:09 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			width(t_spf *esp, va_list *argp)
{
	h_zero(esp);
	if (!star(esp, argp))
	{
		esp->width = ft_atoi((const char *)esp->cnt);
		if (esp->width)
		{
			while (*esp->cnt >= '0' && *esp->cnt <= '9')
				esp->cnt++;
			esp->h_w = 1;
		}
		else
			esp->h_w = 0;
	}
		//Evaluar aqui el numero
}
