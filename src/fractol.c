/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:46:24 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/26 06:09:37 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	help_msg(void)
{
	ft_putendl_fd("\n+======================================================================+", 1);
	ft_putendl_fd("|                         FRACT'OL-HELP	                               |", 1);
	ft_putendl_fd("+======================================================================+\n", 1);
	ft_putendl_fd("+			Invalid Choice !!!			       +\n", 1);
	ft_putendl_fd("+	1- For Mandelbrot Set ,Plz Use :   \e[36m./fract-ol mandelbrot\e[0m       +\n", 1);
	ft_putendl_fd("+	2- For Random Julia Set ,Plz Use : \e[36m./fract-ol julia\e[0m 	       +\n", 1);
	ft_putendl_fd("+	3- For A Specified Julia Set ,Plz Use :\e[36m./fract-ol julia x y\e[0m    +\n", 1);
	ft_putendl_fd("+	4- For Koch-Snowflake Set ,Plz Use : \e[36m./fract-ol koch\e[0m           +\n", 1);
	ft_putendl_fd("+	For Julia, you may specify starting values.               +", 1);
	ft_putendl_fd("+	For Julia, you may specify starting values.               +", 1);
	ft_putstr_fd("\nFor Julia, you may specify starting values     \n", 1);
	ft_putstr_fd("\nValues must be between -2.0 and 2.0     \n", 1);
	ft_putstr_fd(" Values must be between\n", 1);
	ft_putendl_fd("-2.0 and 2.0 and must contain a decimal point.", 1);
	ft_putendl_fd("\e[36m+     Usage example:	./fractol <type>                               +\n\n+\t\t\t./fractol mandelbrot                           +\e[0m", 1);
	ft_putendl_fd("\e[36mUsage example:\t", 1);
	ft_putendl_fd("./fractol julia\n\t\t./fractol julia 0.285 0.01\e[0m", 1);
	exit (0);
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	ft_default_values(t_data *data)
{
	data->min_x = -2.0;
	data->max_x = 2.0;
	data->min_y = -2.0;
	data->max_y = 2.0;
	data->color = 0;
}

void	handle_args(int ac, char **av, t_data data)
{
	if (ac == 1)
		help_msg();
	if (ac == 2 && !ft_strncmp("mandelbrot", av[1], ft_strlen(av[1])))
		data.set = MANDELBROT;
	else if (ac == 2 && !ft_strncmp("julia", av[1], ft_strlen(av[1])))
		data.set = JULIA;
	else if (ac == 2 && !ft_strncmp("tricorn", av[1], ft_strlen(av[1])))
		data.set = TRICORN;
	else
		help_msg();
}

int	main(int ac, char **av)
{
	// t_data	data;
	
	// handle_args(ac,av[1],data);
	// //***************************** INITIALIZATION ***********************************
	// data.mlx = mlx_init();
	// data.mlx_win = mlx_new_window(data.mlx,WINDOW_WIDTH,WINDOW_HEIGHT,"FRACTOL");
	// data.img = mlx_new_image(data.mlx,WINDOW_WIDTH,WINDOW_HEIGHT);
	// data.addr = mlx_get_data_addr(data.img,&data.bits_per_pixel,&data.line_length,&data.endian);
	// //**************************** Init to Default values ******************************
	// ft_default_values(&data);
	// //**************************** R
	// render(&data);
	// // mlx_mouse_hook(data.mlx_win, mouse_move, &data);
	// // mlx_hook(data.mlx_win, 2, 0, manage_key, &data);
	// // mlx_hook(data.mlx_win, 6, 0, mouse_motion, &data);
	// // mlx_hook(data.mlx_win, 17, 0, destroy, &data);
	// mlx_loop(data.mlx);
	help_msg();
	
}
