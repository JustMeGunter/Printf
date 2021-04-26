/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:52:15 by acrucesp          #+#    #+#             */
/*   Updated: 2021/04/26 20:10:42 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINRF_H
# define LIBPRINRF_H
# include <libft.h>
# include <stdarg.h>
# include <stdio.h>

# define ELM_BASE "0123456789abcdefghijklmnopqrstuvwxyz"
# define ELM_BASE_UP "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"


typedef struct		s_spf
{
	char			*cnt;
	int				zero;
	int				left;
	int				width;
	int				count;
	int				h_p;
	int				prcn;
	int				len; 
	int				n_p;
	int				h_w;
	int				negative;
}					t_spf;

void			precision(t_spf *esp, va_list *argp);
void			draw_width(t_spf *esp);
int				ft_printf(const char *format, ...);
void			h_prc_char(t_spf *esp, va_list *argp, char percent);
void			h_any_n(t_spf *esp, va_list *argp, char c);
void			zero_left(t_spf *esp);
void			draw_precision(t_spf *esp);
void			width(t_spf *esp, va_list *argp);
void			empty(t_spf *esp);
void            h_string(t_spf *esp, va_list *argp);
int 	        star(t_spf *esp, va_list *argp);
int				is_negative(t_spf *esp, char **nn);
char			*is_pnt_or_h(t_spf *esp, long long unsigned int n, char c);

#endif
