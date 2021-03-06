/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:30:12 by acrucesp          #+#    #+#             */
/*   Updated: 2021/05/06 19:22:45 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>
#include <stdio.h>

char	*get_esp(const char **format)
{
	char	*aux;

	if (!ft_strchrs(*format + 1, "%cdisxXpun"))
		return (0);
	aux = ft_substr(*format, 1, ft_strlen(*format)
			- ft_strlen(ft_strchrs(*format + 1, "%cdisxXpun")));
	*format = *format + ft_strlen(aux);
	return (aux);
}

void	charge_strc(t_spf *esp, va_list *argp)
{
	flags(esp);
	width(esp, argp);
	precision(esp, argp);
	length(esp);
}

void	h_trigger(const char **format, va_list *argp, t_spf *esp)
{
	char	*t_end;
	char	*aux;

	if (**format == '%')
	{
		esp->cnt = get_esp(format);
		aux = esp->cnt;
		if (esp->cnt)
			charge_strc(esp, argp);
		if (!esp->cnt && write(1, "0", 1))
			return ;
		t_end = ft_strchrs(esp->cnt, "%cdisxXpun");
		if (*t_end == 'c' || *t_end == '%')
			h_prc_char(esp, argp, *t_end);
		else if (*t_end == 's')
			h_string(esp, argp);
		else if (*t_end == 'i' || *t_end == 'd' || *t_end == 'x'
			|| *t_end == 'X' || *t_end == 'u' || *t_end == 'p')
			h_any_n(esp, argp, *t_end);
		else if (*t_end == 'n')
			fncn(argp, esp);
		free(aux);
	}
	else
		esp->count += write(1, *format, 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	argp;
	t_spf	*esp;
	int		cnt;

	esp = (t_spf *)ft_calloc(1, sizeof(t_spf));
	va_start(argp, format);
	while (*format)
	{
		h_trigger(&format, &argp, esp);
		format++;
	}
	va_end(argp);
	cnt = esp->count;
	free(esp);
	return (cnt);
}
