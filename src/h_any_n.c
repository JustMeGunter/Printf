/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_any_n.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:41:03 by acrucesp          #+#    #+#             */
/*   Updated: 2021/05/01 19:43:37 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void	manage_width(t_spf *esp, int k)
{
	if (!esp->left && !k)
	{
		while (esp->width > esp->len && (esp->width > esp->prcn || esp->n_p))
		{
			draw_width(esp);
			esp->width--;
		}
	}
	if (esp->left && k)
	{
		while (esp->width > esp->len && (esp->width > esp->prcn || esp->n_p))
		{
			draw_width(esp);
			esp->width--;
		}
	}
}

void	manage_precision(t_spf *esp)
{
	while (esp->prcn > esp->len && esp->prcn > 0 && !esp->n_p)
	{
		draw_precision(esp);
		esp->prcn--;
	}
}

void	manage_chr(t_spf *esp, char *nn)
{
	int			i;

	i = -1;
	if (esp->len == 1 && esp->h_p && esp->prcn == 0 && *nn == '0' && !esp->h_w)
		esp->len = 0;
	if (esp->len == 1 && esp->h_p && esp->prcn == 0 && *nn == '0' &&
			esp->h_w && !esp->width)
		esp->len = 0;
	if (esp->len == 1 && esp->h_p && esp->prcn == 0 && *nn == '0' && !esp->plus)
		esp->count += write(1, " ", 1);
	else if (esp->len == 1 && esp->h_p && esp->prcn == 0 && *nn == '0' && esp->plus)
		return ;
	else if (esp->len > 0)
		while (nn[++i])
			esp->count += write(1, &nn[i], 1);
}

char	*get_num(char c, va_list *argp, t_spf *esp)
{
	char *nn;

	if (esp->length)
		nn = h_lh(esp, argp, c);
	else if (c == 'i' || c == 'd')
		nn = ft_itoa(va_arg(*argp, int));
	else if (c == 'u')
		nn = ft_itoa(va_arg(*argp, unsigned int));
	else if (c == 'x' || c == 'X')
		nn = is_pnt_or_h(esp, va_arg(*argp, unsigned int), c);
	else if (c == 'p')
		nn = is_pnt_or_h(esp, va_arg(*argp, unsigned long int), c);
	return (nn);
}

void	h_any_n(t_spf *esp, va_list *argp, char c)
{
	char		*nn;
	char		*fnn;

	nn = get_num(c, argp, esp);
	fnn = nn;
	esp->len = ft_strlen(nn);
	sign(esp, &nn, c);
	manage_width(esp, 0);
	sign_draw(esp, 0, nn, c);	
	manage_precision(esp);
	if (c == 'p')
		esp->count += write(1, "0x", 2);
	manage_chr(esp, nn);
	manage_width(esp, 1);
	free(fnn);
	empty(esp);
}
