# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 10:32:25 by amtouham          #+#    #+#              #
#    Updated: 2023/07/20 12:43:08 by amtouham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COLORS ###
GREEN       = \033[1;32m
CYAN        = \033[1;36m

# Program name
NAME	= fractol

# Compiler
CC		= cc
FLAGS	= -Ofast -Wall -Wextra -Werror

# Minilibx
MLX			= -lmlx -framework OpenGL -framework AppKit

# Header
HEADER 		= fractol.h

# Sources
SRC_PATH	= src/main
SRCS		= $(addsuffix .c, $(SRC_PATH)) 

# Objects
OBJS		= $(addsuffix .o, $(SRC_PATH)

# Rules

%.o : %.c $(HEADER)
	@echo "$(GREEN)Building fractol⏳️...$(CYAN)"
	@$(CC) $(FLAGS) -c -o $@ $<
	@echo "$(GREEN)Fractol ready!$(CYAN)"

all: $(NAME)
	@echo  "$(GREEN)Building done successfully✅...$(CYAN)"

bonus: all

clean:
	@echo "$(GREEN)Removing .o object files🗑...$(CYAN)"
	@rm -rf $(OBJS)

fclean: clean
	@echo "$(GREEN)Removing fractol💣...$(CYAN)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean bonus