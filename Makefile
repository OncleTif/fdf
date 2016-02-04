# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 09:19:22 by tmanet            #+#    #+#              #
#    Updated: 2016/02/04 14:34:00 by tmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB = libft/libft.a

MINILIBX = -lmlx -framework OpenGL -framework AppKit

SRC =   main.c \
		ft_reader.c \
		make_window.c \
		ft_draw.c \
		ft_draw_line.c \
		ft_print_key.c \
		ft_get_key.c \
		ft_expose.c \
		ft_move_draw.c \
		ft_grid_builder.c \
		ft_map_builder.c \
		ft_map_relative.c \
		ft_grid_printer.c \
		ft_rotate_xy_lft.c \
		ft_rotate_xy_rgt.c \
		ft_rotate_xz_dwn.c \
		ft_rotate_xz_up.c \
		ft_rotate_yz_lft.c \
		ft_rotate_yz_rgt.c \
		ft_line_to_i.c \
		ft_line_to_nodes.c \
		ft_zoom_in.c \
		ft_zoom_out.c \
		ft_projector.c \
		ft_newnode.c


OBJ = $(SRC:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(LIB) $(MINILIBX)
	@echo "COMPILATION de $(NAME)"

%.o: %.c $@
	@$(CC) $(FLAGS) -c $<
	@echo "compilation de $<"

clean:
	@make -C libft clean
	@echo "suppression des objets de la lib"
	@rm -rf $(OBJ)
	@echo "suppression des objets"

fclean: clean
	@make -C libft fclean
	@echo "suppression de la lib"
	@rm -rf $(NAME)
	@echo "suppression de $(NAME)"

re: fclean all
