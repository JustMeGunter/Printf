/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:41:41 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/28 21:33:55 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void	zero_left(t_spf *esp)
{
	while (*esp->cnt == '0' || *esp->cnt == '-' ||  *esp->cnt == '+' ||
			*esp->cnt == ' ' || *esp->cnt == '#')
	{
		if (*esp->cnt == '0')
			esp->zero = 1;
		else if (*esp->cnt == '-')
			esp->left = 1;
		else if (*esp->cnt == ' ')
			esp->space = 1;
		else if (*esp->cnt == '+')
			esp->plus = 1;
		else if (*esp->cnt == '#')
			esp->hash = 1;
		if (esp->zero == 1 && esp->left == 1)
			esp->zero = 0;
		esp->cnt++;
	}
}
