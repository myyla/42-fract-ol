# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 10:32:25 by amtouham          #+#    #+#              #
#    Updated: 2023/07/21 06:41:22 by amtouham         ###   ########.fr        #
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
SRCS			= src/fractol.c

# Objects
OBJS		=  $(SRCS:.c=.o)

# Rules


$(NAME): $(OBJS) 
	@$(CC) $(OBJS) $(MLX) -o $(NAME)

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