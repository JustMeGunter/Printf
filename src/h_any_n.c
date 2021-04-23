/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_any_n.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:41:03 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/23 16:43:51 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void			h_any_n(t_spf *esp, va_list *argp, char c)
{
	char		*nn;
	int			i;

	i = -1;
	left(esp);
	width(esp, argp);
	precision(esp, argp);
	if (c == 'i' || c == 'd' || c == 'u')
		nn = ft_itoa(va_arg(*argp, int));
	else
		nn = is_pnt_or_h(esp, va_arg(*argp, size_t), c);
	esp->sublen = ft_strlen(nn);
	if (esp->sublen == 1 && *nn == '0' && esp->precision == 0 && esp->width == 0 && esp->h_p)
		*nn = '\0';
	else if (esp->sublen == 1 && *nn == '0' && esp->h_p && esp->precision == 0)
		*nn = ' ';
	if (is_negative(esp, &nn) && !esp->h_p && esp->zero && esp->negative--)
		esp->count += write(1, "-", 1);
	if (!esp->left)
	{
		if (esp->width > esp->sublen && esp->width > esp->precision && esp->precision && *nn != '-' && esp->sublen < esp->precision)
			draw_width(esp);
		while (esp->width-- > esp->sublen && esp->width > esp->precision)
			draw_width(esp);
	}
	if (esp->negative)
		esp->count += write(1, "-", 1);
	while (esp->precision-- > esp->sublen && esp->precision > 0)
		draw_precision(esp);
	if (c == 'p')
		esp->count += write(1, "0x", 2);
	if (esp->sublen > 0)
		while (nn[++i])
			esp->count += write(1, &nn[i], 1);
	else
		esp->count += write(1, " ", 1);
	if (esp->left)
		while (esp->width-- > esp->sublen && esp->width > esp->precision)
			draw_width(esp);
	empty(esp);
}
