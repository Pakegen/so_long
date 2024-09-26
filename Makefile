# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 13:34:23 by quenalla          #+#    #+#              #
#    Updated: 2024/09/26 14:09:02 by quenalla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

NAME = so_long_bonus

CC = cc

CFLAGS = -Wall -Werror -Wextra 

MLXFLAGS = -lmlx -lXext -lX11

LIBFT = ./librairies/Libft/libft.a

MLX = ./mlx/libmlx.a

SRC_DIR = ./src/

BONUS_SRC_DIR = ./bonus_src/

SRC 		= $(addprefix $(SRC_DIR), \
		  so_long.c)

BONUS_SRC 	= $(addprefix $(BONUS_SRC_DIR),\
		  so_long_bonus.c)

all: $(LIBFT) $(MLX) $(NAME)

$(NAME):
	$(CC) $(LIBFT) $(MLX) $(SRC) $(CFLAGS) $(MLXFLAG) -o $(NAME)

$(NAME_BONUS):
	$(CC) $(BONUS_SRC) $(LIBFT) $(CFLAGS) $(MLXFLAGS) -o $(NAME_BONUS)

$(LIBFT):
	make all -C librairies/Libft/
	make bonus -C librairies/Libft/

$(MLX):
	make -C mlx/

bonus: $(LIBFT) $(MLX) $(NAME_BONUS)

clean:
	make fclean -C librairies/Libft/
	make fclean -C mlx/

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

rebonus: fclean $(NAME_BONUS)

.PHONY: all clean fclean re rebonus
