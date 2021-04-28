/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pnt_or_h.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:00:02 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/28 21:35:14 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

char			*is_pnt_or_h(t_spf *esp, long long unsigned int n, char c)
{
	char		*aux_ret;

	if (c == 'p' || (n != 0 && esp->hash))
		esp->width -= 2;
	aux_ret = ft_itoa_base(n, 16, c == 'X' ? ELM_BASE_UP : ELM_BASE);
	return (aux_ret);
}
