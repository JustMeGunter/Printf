/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 20:49:12 by acrucesp          #+#    #+#             */
/*   Updated: 2021/03/13 17:34:25 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

char		*ft_itoa_base(long long int n,  int base, char *elm_base)
{
	unsigned long long int	nn;
	char					*ret;
	int						i;

	i = ft_ndigit(n, base);
	if (n < 0)
	{
		nn = -n;
		i++;
	}
	else
		nn = n;
	ret = malloc(sizeof(char) * i + 1);
	*(ret + i)  = '\0';
	while (nn != 0)
	{
		ret[--i] = elm_base[nn % base];
		nn = nn / base;
	}
	return(ret);
}