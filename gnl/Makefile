# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jelee <jelee@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/09 17:00:23 by jelee             #+#    #+#              #
#    Updated: 2020/10/05 18:28:46 by jelee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the library
NAME=libgnl.a

#Source
SRC=get*.c

#Object
OBJ=get*.o

#Include
INC=-I ./

FLAGS=-Wall -Wextra -Werror

#libft library link
#LIBFT=-L ../libft -lft

all:$(NAME)

$(NAME): 
	@clang-9 ${FLAGS} $(INC) ${LIBFT} -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus: re

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
