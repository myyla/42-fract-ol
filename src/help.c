/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:51:55 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/02 07:11:43 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fractol.h"

int	help_msg(void)
{
	ft_putendl_fd("\n+======================================================================+", 1);
	ft_putendl_fd("|                         FRACT'OL-HELP	                               |", 1);
	ft_putendl_fd("+======================================================================+\n", 1);
	ft_putendl_fd("+			Invalid Choice !!!			       +\n", 1);
	ft_putendl_fd("+	1- For Mandelbrot Set ,Plz Use :   \e[36m./fractol mandelbrot\e[0m        +\n", 1);
	ft_putendl_fd("+	2- For Default Julia Set ,Plz Use : \e[36m./fractol julia\e[0m 	       +\n", 1);
	ft_putendl_fd("+	3- For A Specified Julia Set ,Plz Use :\e[36m./fractol julia x y\e[0m     +\n", 1);
	ft_putendl_fd("+	4- For Tricorn Set ,Plz Use : \e[36m./fractol tricorn\e[0m                +\n", 1);
	ft_putendl_fd("+ N.B: *For Julia, you may specify starting values!                    +\n", 1);
	ft_putendl_fd("+      *Values must be between -2.0 and 2.0 and must contain           +\n", 1);
	ft_putendl_fd("+        a decimal point.					       +\n", 1);
	ft_putendl_fd("\e[36m+      *Usage example:	./fractol julia                                +\n\n+\t\t\t./fractol julia 0.285 0.01t                    +\e[0m", 1);
	return(exit (0),0);
}