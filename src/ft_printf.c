/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:12:55 by acrucesp          #+#    #+#             */
/*   Updated: 2021/03/21 14:26:03 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>
/****************************/
/* conversions cspdiuxX%	*/
/* flags -0.*				*/
/****************************/

int				pend_subspecifier(const char **format)
{
	int			i;
	int			j;
	char		*specifiers;

	i = 0;
	j = 0;
	specifiers = "%cidsxXpu";
	while((*format) + i)
	{
		while (*(specifiers + j))
		{
			if (*(*format + i) == *(specifiers + j))
				return (i);
			j++;	
		}
		j = 0;
		i++;
	}
	return (0);
}

char			*h_subspecifiers(const char **format)
{
	int			pend_sub;
	char		*subespc;

	pend_sub = pend_subspecifier(format);
	subespc = ft_substr(*format, 0, pend_sub);
	while (pend_sub-- > 0)
		(*format)++;
	return (subespc);
}

void			h_specifiers(const char **format, va_list argp, t_spf *subesp)
{
	if (**format == '%')
	{
		(*format)++;
 		subesp->content = h_subspecifiers(format);
		if (**format == '%')
			h_prc_char(subesp, argp, '%');
		else if (**format == 'c')
			h_prc_char(subesp, argp, 0);
		else  if (**format == 'i' || **format == 'd')
			h_any_n(subesp, argp, 0);
		else if (**format == 's')
			h_string(subesp, argp);
		else if (**format == 'x' || **format == 'X')
			h_any_n(subesp, argp, **format == 'x' ? 'x' : 'X');
		else if (**format == 'p')
			h_any_n(subesp, argp, 'p');
		else if (**format == 'u')
			h_any_n(subesp, argp, 0);
		else
			write(1, "not implemented!",  16);
	}
	else 
		subesp->count += write(1,*format, 1);
}

int				ft_printf(const char *format,  ...)
{
	va_list		argp;
	t_spf		*subesp;
	int			count;

	subesp = (t_spf *)ft_calloc(1, sizeof(t_spf));
	subesp->zero = 0;
	va_start(argp, format);
	while (*format)
	{
		h_specifiers(&format, argp, subesp);
		format++;
	}
	count = subesp->count;
	va_end(argp);
	free(subesp);
	subesp = 0;
	return (count);
}