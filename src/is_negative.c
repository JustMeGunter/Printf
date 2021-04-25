/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 17:09:13 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/17 18:47:48 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

int	is_negative(t_spf *esp, char **nn)
{
	if (**nn == '-')
	{
        (*nn)++;
		esp->negative = 1;
        if (esp->prcn)
			esp->prcn++;
		return (1);
	}
	return (0);
}
