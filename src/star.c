/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   star.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 12:40:12 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/25 20:53:54 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

int				star(t_spf *esp, va_list *argp)
{
	int		val;

	if (*esp->cnt == '*')
	{
		esp->cnt++;
		val = va_arg(*argp, int);
		return (1);
	}
	return (0);
}
