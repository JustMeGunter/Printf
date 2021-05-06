/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:02:13 by acrucesp          #+#    #+#             */
/*   Updated: 2021/05/06 19:30:35 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h> 

void	empty(t_spf *esp)
{
	int		auxcount;

	auxcount = esp->count;
	if (esp->length)
		free(esp->length);
	ft_bzero(esp, sizeof(*esp));
	esp->count = auxcount;
}
