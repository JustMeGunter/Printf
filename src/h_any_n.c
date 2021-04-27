/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_any_n.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:41:03 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/27 16:38:08 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void			h_any_n(t_spf *esp, va_list *argp, char c)
{
	char		*nn;
	int			i;

	i = -1;
	if (c == 'i' || c == 'd')
		nn = ft_itoa(va_arg(*argp, int));
	else if (c == 'u')
		nn = ft_itoa(va_arg(*argp, unsigned int));
	else
		nn = is_pnt_or_h(esp, va_arg(*argp, size_t), c);
	esp->len = ft_strlen(nn);
	if (is_negative(esp, &nn) && !esp->h_p && esp->zero && esp->negative--)
		esp->count += write(1, "-", 1);
	if (!esp->left)
	{
		while (esp->width > esp->len && esp->width > esp->prcn)
		{
			draw_width(esp);
			esp->width--;
		}
	}
	if (esp->negative)
		esp->count += write(1, "-", 1);
	while (esp->prcn > esp->len && esp->prcn > 0)
	{
		draw_precision(esp);
		esp->prcn--;
	}
	//if (c == 'p')
	//	esp->count += write(1, "0x", 2);
	if (esp->len == 1 && esp->h_p && esp->prcn == 0 && *nn == '0' && !esp->h_w)
		esp->len = 0;
	if (esp->len == 1 && esp->h_p && esp->prcn == 0 && *nn == '0')
		esp->count += write(1, " ", 1);
	else if (esp->len > 0)
		while (nn[++i])
			esp->count += write(1, &nn[i], 1);
	if (esp->left)
		while (esp->width > esp->len && esp->width > esp->prcn)
		{
			draw_width(esp);
			esp->width--;
		}
	empty(esp);
}
