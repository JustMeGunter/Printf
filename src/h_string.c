/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_string.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:36:31 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/26 19:30:57 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void            h_string(t_spf *esp, va_list *argp)
{
    int         i;
	char		*str;

    i = -1;
	str = va_arg(*argp, char *);
	if (!str)
		str = "(null)";
	esp->len  = ft_strlen(str);
	if (esp->prcn < esp->len && (esp->prcn != 0 || esp->h_p) && !esp->n_p)
		esp->width += esp->len - esp->prcn;
	if (!esp->left)
		while (esp->width-- > esp->len)
			draw_width(esp);
	if (!esp->h_p || esp->prcn != 0 || esp->n_p)
		while (str[++i] && (i < esp->prcn || esp->prcn == 0 || esp->n_p))
			esp->count += write(1, &str[i], 1);
	if (esp->left)
		while (esp->width-- > esp->len)
			draw_width(esp);
	empty(esp);
}
