/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:59:31 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/25 21:50:00 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void			left(t_spf *esp)
{
	h_zero(esp);
	if (*esp->cnt == '-')
	{
		esp->cnt++;
		esp->left = 1;
	}
}
