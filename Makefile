# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/22 20:43:09 by acrucesp          #+#    #+#              #
#    Updated: 2021/04/16 22:52:00 by acrucesp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TIME				=	$(shell date +'%d/%m/%Y %H:%M:%S')

MSG					=

DIR_SRC				=	src/
SRC					=	ft_printf.c h_prc_char.c width.c precision.c left.c\
						empty.c star.c draw_width.c h_zero.c h_string.c

MAIN				=	main.c

DIR_OBJ				=	obj/
OBJ					= 	$(SRC:%.c=%.o)

DIR_INC				=	inc/
HEADER				= 	inc/libftprintf.h

NAME				= 	libftprintf.a

CC					= 	clang

RM					= 	rm -f

CFLAGS				= 	-Wall -Wextra -Werror -g 

%.o:		 		$(DIR_SRC)/%.c
					$(CC) $(CFLAGS) -I $(DIR_INC) -I Libft/inc/ -c $< -o $(DIR_OBJ)$@ 

$(NAME):			Libft/libft.a magic

magic:				$(OBJ)
					ar rcs $(NAME) $(addprefix $(DIR_OBJ), $^) Libft/obj/*.o 

test:				re
					$(CC) $(CFLAGS) -I Libft/inc/ -I inc/ -o $@ $(MAIN) $(NAME)

Libft/libft.a:
					$(MAKE) -C Libft

.PHONY:				all clean fclean re			

all:				$(NAME)

clean:
					#$(RM) $(addprefix $(DIR_OBJ), $(OBJ)) 	
					$(RM) $(DIR_OBJ)*
					$(MAKE) -C Libft clean

fclean:				clean
					$(RM) $(NAME)
					$(MAKE) -C Libft fclean
					$(RM) test
			
re:					fclean all

git:
					git add .
					git commit -am "$(TIME) - $(M)"
					git push
