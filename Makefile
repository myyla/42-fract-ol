# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 10:32:25 by amtouham          #+#    #+#              #
#    Updated: 2023/08/02 13:17:22 by amtouham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COLORS ###
BLUE        = \033[0;36m
RED        = \033[0;31m

# Program name
NAME	= fractol

# Compiler
CC		= cc
FLAGS	= -Ofast -Wall -Wextra -Werror #-g -fsanitize=address 

# Minilibx
MLX			= -lmlx -framework OpenGL -framework AppKit

# Header
HEADER 		= src/fractol.h

# Sources
SRCS			= src/color.c src/float_atoi.c src/fractol.c src/help.c src/hook_key.c src/hook_mouse.c src/init.c src/render.c src/sets.c src/utils.c 

# Objects
OBJS		=  $(SRCS:.c=.o)

# Rules

%.o : %.c $(HEADER)
	@echo "$(BLUE)Building fractol ⏳️...$(BLUE)"
	@$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(FLAGS) $(MLX) -o $(NAME)
	@echo "\n\033[1;33m+----------------------------------------------------------------------+";
	@echo "\033[1;33m|                         FRACT'OL CONTROLS                            |";
	@echo "\033[1;33m+----------------------------------------------------------------------+";
	@echo "\033[1;33m| Switch Fractals.\033[0;0m\t\t1, 2, 3                                \033[1;33m|";
	@echo "\033[1;33m| Zoom In & Out \033[0;0m\t\ti/o or Scroll Wheel                    \033[1;33m|";
	@echo "\033[1;33m| Change Color Scale \033[0;0m\t\tSpacebar                               \033[1;33m|";
	@echo "\033[1;33m| Quit \033[0;0m\t\t\t\tEsc or Close Button                    \033[1;33m|";
	@echo "\033[1;33m+----------------------------------------------------------------------+";
	@echo "\033[1;33m|                        FRACT'OL INPUTS MENU                          |";
	@echo "\033[1;33m+----------------------------------------------------------------------+";
	@echo "\033[1;33m| 1.\033[0m For Mandelbrot set, Plz Use          :  \033[36m./fractol mandelbrot\033[0;0m\033[1;33m      |";
	@echo "\033[1;33m| 2.\033[0;0m For Default Julia set, Plz Use       :  \033[36m./fractol julia\033[0;0m\033[1;33m           |";
	@echo "\033[1;33m| 3.\033[0;0m For A Specified Julia set, Plz Use   :  \033[36m./fractol julia x y\033[0;0m\033[1;33m       | ";
	@echo "\033[1;33m| 4.\033[0;0m For Tricorn set, Plz Use             :  \033[36m./fractol tricorn\033[0;0m\033[1;33m         |";
	@echo "\033[1;33m+----------------------------------------------------------------------+";
	@echo "\n\033[1;33m- Notes ::";
	@echo "\033[1;33m \t* For Julia, you may specify starting values!";
	@echo "\033[1;33m \t* Values must be between -2.0 and 2.0 and must contain a decimal point.";
	@echo "\033[1;33m \t* Usage example: \033[0;0m ./fractol julia 0.285 0.01\n";


all: $(NAME)
	@echo  "$(BLUE)Building done successfull ✅...$(BLUE)"

bonus: all

clean:
	@echo "$(RED)Removing .o object files🗑...$(BLUE)"
	@rm -rf $(OBJS)

fclean: clean
	@echo "$(RED)Removing fractol💣...$(BLUE)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean bonus