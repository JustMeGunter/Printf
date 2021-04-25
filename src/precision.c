/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:01:30 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/25 20:46:18 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			precision(t_spf *esp, va_list *argp)
{
	if (*esp->cnt == '.')
	{
		esp->h_p = 1;
		esp->cnt++;
		if (!star(esp, argp))
		{
			esp->prcn = ft_atoi((const char *)esp->cnt);
			if (esp->prcn)
				while (*esp->cnt >= '0' && *esp->cnt <= '9')
					esp->cnt++;
		}
		//Evaluar aqui el numero
	}
}
