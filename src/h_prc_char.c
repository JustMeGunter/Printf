/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_prc_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:12:02 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/15 22:00:07 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 
#include <stdio.h>

void			h_prc_char(t_spf *esp, va_list *argp, char percent)
{
	int         i;
	char		character;

    i = -1;
	left(esp);
	width(esp, &argp);
	if (percent != '%')
		character = va_arg(*argp, int);
	else
		 character = percent;
	esp->sublen = 1;
	if (!esp->left && percent != '%')
		while (esp->width-- > esp->sublen)
			draw_width(esp);
	esp->count += write(1, &character, 1);
	if (esp->left && percent != '%')
		while (esp->width-- > esp->sublen)
			draw_width(esp);
	empty(esp);
}
