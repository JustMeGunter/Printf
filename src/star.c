/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   star.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 12:40:12 by acrucesp          #+#    #+#             */
/*   Updated: 2021/05/04 16:27:16 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

int	star(t_spf *esp, va_list *argp)
{
	if (*esp->cnt == '*')
	{
		esp->cnt++;
		if (!esp->h_p)
			esp->h_w = 1;
		return (va_arg(*argp, int));
	}
	return (0);
}
