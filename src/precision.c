/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:01:30 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/26 19:22:19 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			precision(t_spf *esp, va_list *argp)
{
	if (*esp->cnt == '.')
	{
		esp->h_p = 1;
		esp->cnt++;
		esp->prcn = star(esp, argp);
		if (!esp->prcn)
		{
			esp->prcn = ft_atoi((const char *)esp->cnt);
			if (esp->prcn)
				while (*esp->cnt >= '0' && *esp->cnt <= '9')
					esp->cnt++;
		}
		if (esp->prcn < 0)
		{
			esp->n_p = 1;
			esp->prcn = -esp->prcn;
		}
	}
	else
		esp->h_p = 0;
}
