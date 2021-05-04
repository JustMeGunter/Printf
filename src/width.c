/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:00:37 by acrucesp          #+#    #+#             */
/*   Updated: 2021/05/04 16:27:56 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void	width(t_spf *esp, va_list *argp)
{
	esp->width = star(esp, argp);
	if (!esp->h_w && *esp->cnt != '.')
	{
		esp->width = ft_atoi((const char *)esp->cnt);
		if (esp->width)
			while (*esp->cnt >= '0' && *esp->cnt <= '9')
				esp->cnt++;
		esp->h_w = 1;
	}
	if (esp->width < 0)
	{
		esp->left = 1;
		esp->width = -esp->width;
	}
}
