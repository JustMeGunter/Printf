/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:01:30 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/22 20:10:09 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			precision(t_spf *esp, va_list *argp)
{
	if (*esp->content == '.')
	{
		h_zero(esp);
		esp->h_p = 1;
		esp->content++;
		if (!star(esp, argp))
		{
			esp->precision = ft_atoi((const char *)esp->content);
			if (esp->precision)
				while (*esp->content >= '0' && *esp->content <= '9')
					esp->content++;
		}
		if (esp->precision == 0)
			esp->zero = 0;
	}
}
