/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:46:24 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/24 18:35:14 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int error_msg(void)
{
	
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}


void	render_fractal(t_data *data, int x, int y)
{
	double	c;
	
	
	if (data->set == MANDELBROT)
		c = mandelbrot();
	my_mlx_pixel_put(data, x, y, creat_color(data->color,
			c, MAX_ITERATIONS));
}

int	main(int ac, char **av)
{
	t_data	data;
	
	data.mlx = mlx_init();
	data.mlx_win = mlx_new_window(data.mlx,WINDOW_WIDTH,WINDOW_HEIGHT,"FRACTOL");
	data.img = mlx_new_image(data.mlx,WINDOW_WIDTH,WINDOW_HEIGHT);
	data.addr = mlx_get_data_addr(data.img,&data.bits_per_pixel,&data.line_length,&data.endian);
	if (ac == 1)
		error_msg();
	if (ac == 2 && !ft_strncmp("mandelbrot", av[1], ft_strlen(av[1])))
		data.set = MANDELBROT;
	else if (ac == 2 && !ft_strncmp("julia", av[1], ft_strlen(av[1])))
		data.set = JULIA;
	else if (ac == 2 && !ft_strncmp("tricorn", av[1], ft_strlen(av[1])))
		data.set = TRICORN;
	else
		error_msg();
	//clear and init function
	render(&data);
	// mlx_mouse_hook(data.mlx_win, mouse_move, &data);
	// mlx_hook(data.mlx_win, 2, 0, manage_key, &data);
	// mlx_hook(data.mlx_win, 6, 0, mouse_motion, &data);
	// mlx_hook(data.mlx_win, 17, 0, destroy, &data);
	mlx_loop(data.mlx);
}
