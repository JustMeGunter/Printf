/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fncn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:28:31 by acrucesp          #+#    #+#             */
/*   Updated: 2021/05/07 16:35:50 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void	fncn(va_list *argp, t_spf *esp)
{
	if (esp->length)
	{
		if (ft_strchr(esp->length, 'l'))
		{
			if (!ft_strncmp(esp->length, "l", ft_strlen(esp->length)))
				*va_arg(*argp, long int *) = esp->count;
			if (!ft_strncmp(esp->length, "ll", ft_strlen(esp->length)))
				*va_arg(*argp, long long int *) = esp->count;
		}
		else
		{
			if (!ft_strncmp(esp->length, "h", ft_strlen(esp->length)))
				*(short *)va_arg(*argp, int *) = esp->count;
			if (!ft_strncmp(esp->length, "hh", ft_strlen(esp->length)))
				*(signed char *)va_arg(*argp, int *) = esp->count;
		}
	}
	else if (*esp->cnt == 'n')
		*va_arg(*argp, int *) = esp->count;
	else
		return ;
}
