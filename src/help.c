/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:51:55 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/02 10:44:14 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fractol.h"

int	help_msg(void)
{
	ft_putendl_fd("\033[0;31m\n\t\t\t    UNVALID INPUT !!", 1);
	ft_putendl_fd("\n\033[1;33m+----------------------------------------------------------------------+", 1);
	ft_putendl_fd("\033[1;33m|                            FRACT'OL-HELP	                       |", 1);
	ft_putendl_fd("\033[1;33m+----------------------------------------------------------------------+", 1);
	ft_putendl_fd("\033[1;33m|\e[0m	1- For Mandelbrot Set ,Plz Use :   \e[36m./fractol mandelbrot\e[0m        \033[1;33m|", 1);
	ft_putendl_fd("\033[1;33m|\e[0m	2- For Default Julia Set ,Plz Use : \e[36m./fractol julia\e[0m 	       \033[1;33m|", 1);
	ft_putendl_fd("\033[1;33m|\e[0m	3- For A Specified Julia Set ,Plz Use :\e[36m./fractol julia x y\e[0m     \033[1;33m|", 1);
	ft_putendl_fd("\033[1;33m|\e[0m	4- For Tricorn Set ,Plz Use : \e[36m./fractol tricorn\e[0m                \033[1;33m|", 1);
	ft_putendl_fd("\033[1;33m+----------------------------------------------------------------------+", 1);
	ft_putendl_fd("\n\033[1;33m- Notes ::", 1);
	ft_putendl_fd("\033[1;33m \t* For Julia, you may specify starting values!", 1);
	ft_putendl_fd("\033[1;33m \t* Values must be between -2.0 and 2.0 and must contain a decimal point.", 1);
	ft_putendl_fd("\033[1;33m \t* Usage example: \e[0m ./fractol julia 0.285 0.01\n", 1);
	return(exit (0),0);
}