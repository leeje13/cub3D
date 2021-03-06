# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jelee <jelee@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 14:40:16 by jelee             #+#    #+#              #
#    Updated: 2020/10/07 21:58:29 by jelee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#  gcc cub*.c
# -L ft_printf -lftprintf
# -L gnl -lgnl 
# -L libft -lft 
# -L minilibx-linux -lmlx
# -lXext -lX11 -lbsd -lm

# game
GAME=cub3D

# source
SRC=cub3d*.c

# object
OBJ=${SRC:.c=.o}

# include
INC=-I ./ -I ./libft -I ./ft_printf -I ./gnl

# flags
FLAGS=-Wall -Wextra -Werror -g

# ft_printf library link
PRINTF=-L ft_printf -lftprintf

# getnextline library link
GNL=-L gnl -lgnl

# libft library link
LIBFT=-L libft -lft

# mlx library link
MLX=-I minilibx -L minilibx-linux -lmlx 

# additional system libraries
SYS=-lXext -lX11 -lbsd -lm

all:$(GAME)

$(GAME):
	@make -C ./libft
	@make -C ./ft_printf
	@make -C ./gnl
	@make -C ./minilibx-linux
	clang-9 ${FLAGS} ${SRC} ${PRINTF} ${GNL} ${LIBFT} ${MLX} ${SYS} -o ${GAME}

# mlx does not have a clean equivalent
# mlx clean behaves similar to fclean 
clean:
	@/bin/rm -f $(OBJ)
	@make clean -C ./libft
	@make clean -C ./ft_printf
	@make clean -C ./gnl
	
# mlx clean behaves similar to fclean 
fclean: clean
	@/bin/rm -f $(GAME)
	@/bin/rm -f cub3D.bmp
	@make fclean -C ./libft
	@make fclean -C ./ft_printf
	@make fclean -C ./gnl
	@make clean -C ./minilibx-linux

re: fclean all

bonus: re