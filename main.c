/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:58:21 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/14 21:40:16 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>
#include <stdio.h>

int        main()
{

    int         n;
	//if (argc != 2)
	//	return (0);
    printf("******************\n");
    n = printf("abcdef%2c12345\n", 'a');
    printf("!!! %i !!!\n\n", n);
    n = ft_printf("abcdef%2c12345\n", 'a');
    printf("!!! %i !!!\n", n);
	//printf("%s", ft_strchrs("abcdefg", argv[1]));
    return (0);
}

/* %[0||-][number || *][.number || .*] 56478 */
