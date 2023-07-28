# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 10:32:25 by amtouham          #+#    #+#              #
#    Updated: 2023/07/27 15:26:09 by amtouham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COLORS ###
GREEN       = \033[1;32m
CYAN        = \033[1;36m

# Program name
NAME	= fractol

# Compiler
CC		= cc
FLAGS	= -Ofast -Wall -Wextra -Werror -g -fsanitize=address

# Minilibx
MLX			= -lmlx -framework OpenGL -framework AppKit

# Header
HEADER 		= fractol.h

# Sources
SRCS			= src/sets/mandelbrot.c src/color.c src/fractol.c src/init.c src/render.c src/utils.c 

# Objects
OBJS		=  $(SRCS:.c=.o)

# Rules


$(NAME): $(OBJS) 
	@$(CC) $(OBJS) $(FLAGS) $(MLX) -o $(NAME)

%.o : %.c $(HEADER)
	@echo "$(GREEN)Building fractol⏳️...$(CYAN)"
	@$(CC) $(FLAGS) -c -o $@ $<
	@echo "$(GREEN)Fractol ready!$(CYAN)"

all: $(NAME)
	@echo  "$(GREEN)Building done successfully✅...$(CYAN)"

bonus: all

clean:
	@echo "$(CYAN)Removing .o object files🗑...$(CYAN)"
	@rm -rf $(OBJS)

fclean: clean
	@echo "$(GREEN)Removing fractol💣...$(CYAN)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean bonus