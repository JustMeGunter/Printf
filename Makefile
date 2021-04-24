# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acrucesp <acrucesp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/22 20:43:09 by acrucesp          #+#    #+#              #
#    Updated: 2021/04/25 00:01:33 by acrucesp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MSG					=

SRC_DIR				=	src/
SRC					=	ft_printf.c h_prc_char.c width.c precision.c left.c\
						empty.c star.c draw_width.c h_zero.c h_string.c h_any_n.c\
						is_pnt_or_h.c draw_precision.c is_negative.c ft_itoa_base.c

MAIN				=	main.c

OBJ_DIR				=	obj/
OBJ					= 	$(addprefix $(OBJ_DIR), $(SRC:%.c=%.o))

INC_DIR				=	inc/
HEADER				= 	inc/libftprintf.h

NAME				= 	libftprintf.a

CC					=	clang	

RM					= 	rm -f

//CFLAGS				= 	-Wall -Wextra -Werror -g 
CFLAGS				= 	-g 

all:				$(NAME)

$(OBJ_DIR)%.o:		$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -I Libft/inc/ -c $< -o $@ 

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME):			Libft/libft.a $(OBJ) 
	ar rcs $(NAME) $(OBJ) Libft/obj/*.o 

test:				re
	$(CC) $(CFLAGS) -I Libft/inc/ -I inc/ -o $@ $(MAIN) $(NAME)

Libft/libft.a:
	$(MAKE) -C Libft

.PHONY:				all clean fclean re			


clean:
	$(RM) -rf $(OBJ_DIR)
	$(MAKE) -C Libft clean

fclean:				clean
	$(RM) $(NAME)
	$(MAKE) -C Libft fclean
	$(RM) test

re:					fclean all

git:
	git add .
	git commit -am "$(M)"
	git push
