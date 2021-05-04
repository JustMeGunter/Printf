/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pnt_or_h.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:00:02 by acrucesp          #+#    #+#             */
/*   Updated: 2021/05/04 17:02:06 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

char	*is_pnt_or_h(t_spf *esp, long long unsigned int n, char c)
{
	char	*aux_ret;

	if (c == 'p' || (n != 0 && esp->hash))
		esp->width -= 2;
	if (c == 'X')
		aux_ret = ft_itoa_base(n, 16, ELM_BASE_UP);
	else
		aux_ret = ft_itoa_base(n, 16, ELM_BASE);
	return (aux_ret);
}
