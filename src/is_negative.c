/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 17:09:13 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/17 15:41:00 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

int	is_negative(t_spf *esp, char **nn)
{
	if (**nn == '-')
	{
        (*nn)++;
        if (esp->precision)
			esp->precision++;
		return (1);
	}
	return (0);
}
