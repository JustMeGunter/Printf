/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_string.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:36:31 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/21 15:26:24 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void            h_string(t_spf *esp, va_list *argp)
{
    int         i;
	char		*str;

    i = -1;
	left(esp);
	width(esp, argp);
	precision(esp, argp);
	str = va_arg(*argp, char *);
	if (!str)
		str = "(null)";
	esp->sublen  = ft_strlen(str);
	if (esp->precision < esp->sublen && esp->precision != 0)
		esp->width += esp->sublen - esp->precision;
	if (!esp->left)
		while (esp->width-- > esp->sublen)
			draw_width(esp);
	if (!esp->h_p || esp->precision > 0)
		while (str[++i] && (i < esp->precision || esp->precision == 0))
			esp->count += write(1, &str[i], 1);
	if (esp->left)
		while (esp->width-- > esp->sublen)
			draw_width(esp);
	empty(esp);
}
