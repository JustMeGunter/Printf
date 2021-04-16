/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:00:37 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/16 17:10:21 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			width(t_spf *esp, va_list *argp)
{
	if (!star(esp, argp))
	{
		esp->width = ft_atoi((const char *)esp->content);
		if (esp->width)
			while (*esp->content >= '0' && *esp->content <= '9')
				esp->content++;
	}
}
