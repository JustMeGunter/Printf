/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:30:12 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/21 15:14:03 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>
#include <stdio.h>

char	*get_esp(const char **format)
{
	char *aux;

	if (!ft_strchrs(*format + 1, "%cdisxXpu"))
		return (0);
	aux = ft_substr(*format, 1, ft_strlen(*format) - 
			ft_strlen(ft_strchrs(*format + 1, "%cdisxXpu")));
	*format = *format + ft_strlen(aux);
	return (aux);
}

void	h_trigger(const char **format, va_list *argp, t_spf *esp)
{
	char	*t_end;

	if (**format == '%')
	{
		esp->content = get_esp(format); 
		if (!esp->content && write(1, "0", 1))
			return ;
		t_end = ft_strchrs(esp->content, "%cdisxXpu");
		if (*t_end == 'c' || *t_end == '%')
			h_prc_char(esp, argp, *t_end);
		else if (*t_end == 's')
			h_string(esp, argp);
		else if (*t_end == 'i' || *t_end == 'd' || *t_end == 'x' || *t_end == 'X' ||
				*t_end == 'u' || *t_end == 'p')
			h_any_n(esp, argp, *t_end);
		else
			write (1, "not implemented!", 16);
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
