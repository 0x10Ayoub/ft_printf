# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhourba <akhourba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/06 15:42:37 by akhourba          #+#    #+#              #
#    Updated: 2019/01/27 20:20:23 by akhourba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =*.c ./float/*.c ./calculate/*.c ./string/*.c ./hexo/*.c ./libft/*.c

OBJ = *.o

all: $(NAME)

$(NAME):
		@gcc -Wall -Wextra -Werror  -c $(SRC)
		@ar rc $(NAME) $(OBJ) 
clean:
		@make clean  -C libft
		@rm -rf $(OBJ)
fclean: clean
		@make fclean  -C libft
		@rm -rf $(NAME)
re: fclean all
