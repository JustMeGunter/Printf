/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:30:12 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/13 19:29:50 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>
#include <stdio.h>

char	*get_esp(const char **format)
{
	char *aux;

	aux = ft_substr(ft_strchr(*format, '%'), 1,
			ft_strlen(*format) - 
			ft_strlen(ft_strchrs(*format + 1, "%cdisxXpu")));
	*format = *format + ft_strlen(aux);
	return (aux);
}

void	h_trigger(const char **format, va_list argp, t_spf *esp)
{
	char	*aux;
	char	*totalesp;
	
	aux = va_arg(argp, char *);
	if (**format == '%')
	{
		totalesp = get_esp(format); 
		printf(">%s<\n", totalesp);
	}
	else
		esp->cnt += write(1, *format, 1);
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
		h_trigger(&format, argp, esp);
		format++;
	}
	va_end(argp);
	cnt = esp->cnt;
	free(esp);
	return (cnt);
}
