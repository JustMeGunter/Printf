/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:52:15 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/14 20:53:51 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINRF_H
# define LIBPRINRF_H
# include <libft.h>
# include <stdarg.h>

# define ELM_BASE "0123456789abcdefghijklmnopqrstuvwxyz"
# define ELM_BASE_UP "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"


typedef struct		s_spf
{
	char			*content;
	int				zero;
	int				left;
	int				width;
	int				count;
	int				negative;
	int				h_p;
	int				precision;
	int				sublen; 
}					t_spf;

void			precision(t_spf *subesp, va_list argp);
void			draw_width(t_spf *subesp);
int				ft_printf(const char *format, ...);
void			h_prc_char(t_spf *subesp, va_list argp, char percent);
void			h_any_n(t_spf *subesp, va_list argp, char c);
void			left(t_spf *subesp);
void			draw_precision(t_spf *subesp);
void			width(t_spf *subesp, va_list argp);
void			empty(t_spf *subesp);
void            h_string(t_spf *subesp, va_list argp);
int 	        star(t_spf *subesp, va_list argp);
void			h_zero(t_spf *subesp);
void            is_negative(t_spf *subesp, char **nn);
char			*is_pnt_or_h(t_spf *subesp, long unsigned int n, char c);

#endif
