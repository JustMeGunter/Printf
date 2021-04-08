/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:58:21 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/08 21:07:21 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>
#include <stdio.h>

int         main()
{
    //char        c;
    int         n;
    //long int    hx;
    //int         d;
    //char        *str;


    //c = 'a';
    //n = 0;
    //hx = 93992594408;
    //d = -3456;
    //str = "abcdef";


    /*%%*/
/*     printf("%%%%\n");
    printf("%%\n");
    ft_printf("%%\n\n\n"); */
    /*CHARACTER*/
/*     printf("char\n");
    printf("%c\n", 'a');
    ft_printf("%c\n\n\n", 'a'); */
    /*STRING*/
/*     printf("string\n");
    printf("%s\n", "aaaaaaa");
    ft_printf("%s\n", "aaaaaaa"); */
    /*INTEGER*/
/*     printf("integer\n");
    printf("%i\n", 6);
    ft_printf("%i\n\n\n", 6); */
    /*DECIMAL*/
/*     printf("decimal\n");
    printf("%d\n", 5);
    ft_printf("%d\n", 5); */
    /*UNSIGNED INETGER*/
/*     printf("unsigned\n");
    printf("%u\n", -3578);
    ft_printf("%u\n\n\n", -3578); */
    /*HEXADECIMAL*/
/*     printf("hexa\n");
    printf("%x\n", 15);
    ft_printf("%x\n", 15); */
    /*HEXADECIMAL UP*/
/*     printf("hexa up\n");
    printf("%X\n", 15);
    ft_printf("%X\n\n\n", 15); */
    /*POINTER*/
/*     printf("pointer\n");
    printf("%p\n", &c);
    ft_printf("%p\n\n\n", &c); */
    /*FLAGS*//*         - 0 . *        */
/*     printf("=>%02%<=\n");
    ft_printf("=>%02%<=\n\n"); */
    /* printf("=>%5c<=\n", 'a'); */
    //n = ft_printf("%04c1234", 'a');
/*     n = ft_printf("%04%");
    printf("!!! %i !!!", n); */
/*     n = printf(">%*paaaaabb %*.*s\n", 25, &c, -6, 3, "1234");
    printf("!!! %i !!!\n", n);
    printf("*123456789*\n");
    n = ft_printf(">%*paaaaabb %*.*s\n", 25, &c, -6, 3, "1234");
    printf("*123456789*\n");
    printf("!!! %i !!!", n); */
    printf("******************\n");
    n = printf("%32s\n", "abc");
    printf("!!! %i !!!\n\n", n);
    n = ft_printf("%32s\n", "abc");
    printf("!!! %i !!!", n);
    //system("leaks program");
    return (0);
}

/* %[0||-][number || *][.number || .*] 56478 */
