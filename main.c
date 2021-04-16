/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:58:21 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/16 18:05:07 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>
#include <stdio.h>

int        main(int argc, char *argv[])
{

    int         n;
	if (argc != 2)
		return (0);
	if (*argv[1] == '%')
	{
    	printf("******************\n");
		printf("percent\n");
    	n = printf("abcdef%%c12345\n");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("abcdef%%c12345\n");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("percent witdh\n");
    	n = printf("abcdef%2%c12345\n");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("abcdef%2%c12345\n");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("percent precision\n");
    	n = printf("abcdef%.2%c12345\n");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("abcdef%.2%c12345\n");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("percent both\n");
    	n = printf("abcdef%2.2%c12345\n");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("abcdef%2.2%c12345\n");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
	}
	if (*argv[1] == 'c')
	{
    	printf("******************\n");
		printf("character\n");
    	n = printf("abcdef%c12345\n", 'a');
    	printf("!!! %i !!!\n\n", n);
    	n = ft_printf("abcdef%c12345\n", 'a');
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("1 width\n");
    	n = printf("abcdef%1c12345\n", 'a');
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("abcdef%1c12345\n", 'a');
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("2 width\n");
    	n = printf("abcdef%2c12345\n", 'a');
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("abcdef%2c12345\n", 'a');
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("-2 width\n");
    	n = printf("abcdef%-2c12345\n", 'a');
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("abcdef%-2c12345\n", 'a');
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("*4 width\n");
    	n = printf("abcdef%*c12345\n", 4, 'a');
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("abcdef%*c12345\n", 4, 'a');
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("*-4 width\n");
    	n = printf("abcdef%*c12345\n", -4, 'a');
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("abcdef%*c12345\n", -4, 'a');
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
	}
	if (ft_strnstr(argv[1], "MIX", 10))
	{
    	printf("******************\n");
		printf("MIX\n");
    	n = printf("a%4cb%-4ccd%*cef%*c12345\n", 'd', 'c', 4, 'b', -4, 'a');
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%4cb%-4ccd%*cef%*c12345\n", 'd', 'c', 4, 'b', -4, 'a');
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
	}
	if (*argv[1] == 's')
	{
    	printf("******************\n");
		printf("String\n");
    	n = printf("a%sb", "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%sb", "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
	}
    return (0);
}

/* %[0||-][number || *][.number || .*] 56478 */
