/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 17:03:27 by acrucesp          #+#    #+#             */
/*   Updated: 2021/05/04 18:44:08 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

static char	*get_nnh(t_spf *esp, va_list *argp, char c)
{
	if ((c == 'i' || c == 'd')
		&& !ft_strncmp(esp->length, "h", ft_strlen(esp->length)))
		return (ft_itoa((short)va_arg(*argp, int)));
	else if ((c == 'i' || c == 'd')
		&& !ft_strncmp(esp->length, "hh", ft_strlen(esp->length)))
		return (ft_itoa((signed char)va_arg(*argp, int)));
	else if (c == 'u' && !ft_strncmp(esp->length, "h", ft_strlen(esp->length)))
		return (ft_itoa((unsigned short)va_arg(*argp, int)));
	else if (c == 'u' && !ft_strncmp(esp->length, "hh", ft_strlen(esp->length)))
		return (ft_itoa((unsigned char)va_arg(*argp, int)));
	else if ((c == 'x' || c == 'X')
		&& !ft_strncmp(esp->length, "h", ft_strlen(esp->length)))
		return (is_pnt_or_h(esp, (unsigned short)va_arg(*argp, int), c));
	else if ((c == 'x' || c == 'X')
		&& !ft_strncmp(esp->length, "hh", ft_strlen(esp->length)))
		return (is_pnt_or_h(esp, (unsigned char)va_arg(*argp, int), c));
	else
		return (0);
}

static char	*get_nnl(t_spf *esp, va_list *argp, char c)
{
	if ((c == 'i' || c == 'd')
		&& !ft_strncmp(esp->length, "l", ft_strlen(esp->length)))
		return (ft_itoa(va_arg(*argp, long int)));
	else if ((c == 'i' || c == 'd')
		&& !ft_strncmp(esp->length, "ll", ft_strlen(esp->length)))
		return (ft_itoa(va_arg(*argp, long long int)));
	else if (c == 'u'
		&& !ft_strncmp(esp->length, "l", ft_strlen(esp->length)))
		return (ft_itoa(va_arg(*argp, long unsigned int)));
	else if (c == 'u' && !ft_strncmp(esp->length, "ll", ft_strlen(esp->length)))
		return (ft_itoa(va_arg(*argp, long long unsigned int)));
	else if ((c == 'x' || c == 'X')
		&& !ft_strncmp(esp->length, "l", ft_strlen(esp->length)))
		return (is_pnt_or_h(esp, va_arg(*argp, long int), c));
	else if ((c == 'x' || c == 'X')
		&& !ft_strncmp(esp->length, "ll", ft_strlen(esp->length)))
		return (is_pnt_or_h(esp, va_arg(*argp, long long int), c));
	else
		return (0);
}

char	*h_lh(t_spf *esp, va_list *argp, char c)
{
	if (ft_strchr(esp->length, 'l'))
		return (get_nnl(esp, argp, c));
	else
		return (get_nnh(esp, argp, c));
}

void	length(t_spf *esp)
{
	if (ft_strchrs(esp->cnt, "lh"))
	{
		if (ft_strnstr(esp->cnt, "l", ft_strlen(esp->cnt)))
			esp->length = ft_strdup("l");
		else if (ft_strnstr(esp->cnt, "ll", ft_strlen(esp->cnt)))
			esp->length = ft_strdup("ll");
		else if (ft_strnstr(esp->cnt, "h", ft_strlen(esp->cnt)))
			esp->length = ft_strdup("h");
		else if (ft_strnstr(esp->cnt, "hh", ft_strlen(esp->cnt)))
			esp->length = ft_strdup("hh");
		else
			return ;
		if (ft_strlen(esp->length) > 1)
			esp->cnt += 2;
		else
			esp->cnt++;
	}
}
