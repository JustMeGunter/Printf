/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:58:21 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/17 19:28:26 by acrucesp         ###   ########.fr       */
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
	if (ft_strnstr(argv[1], "MIXC", 10))
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
		printf("5 width\n");
    	n = printf("a%5sb", "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%5sb", "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("8 width\n");
    	n = printf("a%8sb", "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%8sb", "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("1 precision\n");
    	n = printf("a%.1sb", "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%.1sb", "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("5 precision\n");
    	n = printf("a%.5sb", "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%.5sb", "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("10 width 5 precision\n");
    	n = printf("a%10.5sb", "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%10.5sb", "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("10 width 3 precision\n");
    	n = printf("a%10.3sb", "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%10.3sb", "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("-10 width 3 precision\n");
    	n = printf("a%-10.3sb", "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%-10.3sb", "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("*-10 width *3 precision\n");
    	n = printf("a%*.*sb", -10, 3, "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%*.*sb", -10, 3, "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("*10 width *30 precision\n");
    	n = printf("a%*.*sb", 10, 30, "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%*.*sb", 10, 30, "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("*-10 width *30 precision\n");
    	n = printf("a%*.*sb", -10, 30, "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%*.*sb", -10, 30, "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
	}
	if (ft_strnstr(argv[1], "MIXS", 10))
	{
    	printf("******************\n");
		printf("MIX\n");
    	n = printf("ab%sab%-3sab%3.3sab%-3.2sab%*.*sab%*.*s", "1234", "1234", "1234", "1234", 10, 3, "1234", -10, 3, "1234");
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("ab%sab%-3sab%3.3sab%-3.2sab%*.*sab%*.*s", "1234", "1234", "1234", "1234", 10, 3, "1234", -10, 3, "1234");
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
	}
	if (*argv[1] == 'i')
	{
    	printf("******************\n");
		printf("Integer\n");
    	n = printf("a%ib", 300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%ib", 300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("5 width\n");
    	n = printf("a%5ib", 300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%5ib", 300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("-5 width\n");
    	n = printf("a%-5ib", 300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%-5ib", 300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("Integer negative\n");
    	n = printf("a%ib", -300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%ib", -300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("5 width negative\n");
    	n = printf("a%5ib", -300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%5ib", -300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("-5 width negative\n");
    	n = printf("a%-5ib", -300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%-5ib", -300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("5 precision\n");
    	n = printf("a%.5ib", 300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%.5ib", 300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("7 width 5 precision\n");
    	n = printf("a%7.5ib", 300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%7.5ib", 300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("10 width 5 precision\n");
    	n = printf("a%10.5ib", 300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%10.5ib", 300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("5 width 5 precision\n");
    	n = printf("a%5.5ib", 300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%5.5ib", 300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("7 width 5 precision negative\n");
    	n = printf("a%7.5ib", -300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%7.5ib", -300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("10 width 5 precision negative\n");
    	n = printf("a%10.5ib", -300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%10.5ib", -300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("-7 width 5 precision\n");
    	n = printf("a%-7.5ib", 300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%-7.5ib", 300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
		printf("-7 width 5 precision negative\n");
    	n = printf("a%-7.5ib", -300);
    	printf("!!! %i !!!\n", n);
    	n = ft_printf("a%-7.5ib", -300);
    	printf("!!! %i !!!\n", n);
    	printf("******************\n");
	}
    return (0);
}

/* %[0||-][number || *][.number || .*] 56478 */
