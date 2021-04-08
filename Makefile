# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/22 20:43:09 by acrucesp          #+#    #+#              #
#    Updated: 2021/04/08 21:48:25 by acrucesp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TIME				=	$(shell date +'%d/%m/%Y %H:%M:%S')

MSG					=

DIR_SRC				=	src
SRC					=	draw_precision.c draw_width.c empty.c ft_itoa_base.c ft_printf.c\
						h_any_n.c h_prc_char.c h_string.c h_zero.c is_negative.c is_pnt_or_h.c\
						left.c star.c

MAIN				=	main.c

DIR_OBJ				=	obj
OBJ					= 	$(SRC:%.c=%.o)

DIR_INC				=	inc
HEADER				= 	inc/libftprintf.h

NAME				= 	libftprintf.a

CC					= 	clang

RM					= 	rm -f

CFLAGS				= 	-Wall -Wextra -Werror 

%.o: 				$(DIR_SRC)/%.c
					echo $@
					$(CC) $(CFLAGS) -I $(DIR_INC) -I Libft/inc/ -c $< -o $(OBJ_DIR)$@ 

$(NAME):			Libft/libft.a magic

magic:				$(OBJ)
					ar rcs $(NAME) $(addprefix $(OBJ_DIR), $^) Libft/obj/*.o 

test:				re
					$(CC) $(CFLAGS) -I Libft/inc/ -I inc/ -g -o $@ $(MAIN) $(NAME)
Libft/libft.a:
					$(MAKE) -C Libft

.PHONY:				all clean fclean re			

all:				$(NAME)

clean:
					$(RM) $(addprefix $(OBJ_DIR), $(OBJ)) 
					$(MAKE) -C Libft clean

fclean:				clean
					$(RM) $(NAME)
					$(MAKE) -C Libft fclean
			
re:					fclean all

git:
					git add .
					git commit -am "$(TIME) - $(M)"
					git push
