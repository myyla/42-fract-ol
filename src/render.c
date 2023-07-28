/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:14:34 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/28 20:58:48 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fractol.h"


void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;
	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}
	
double	init_x(double x, double max_x, double min_x)
{
	return ((x / WINDOW_WIDTH) * (max_x - (min_x)) + (min_x));
}

double	init_y(double y, double max_y, double min_y)
{
	return ((y / WINDOW_HEIGHT) * (max_y - (min_y)) + (min_y));
}

void	generate_fractal(t_data *data, int x, int y)
{
	int	value;
	
	if (data->set == MANDELBROT)
		value = mandelbrot(data, init_x(x, data->max_x, data->min_x),
				init_y(y, data->max_y, data->min_y));
	else if (data->set == JULIA)
	 	value = julia(data,init_x(x, data->max_x, data->min_x),
				init_y(y, data->max_y, data->min_y));
	// else
	// 	value = kosh(init_x(x, data->max_x, data->min_x),
	// 			init_coord(y, data->max_y, data->min_y));
	my_mlx_pixel_put(data, x, y, set_pixel_color(data, value, x, y, data->color));
}

void	render(t_data *data)
{
	int		x;
	int		y;

	y = -1;
	while (++y < WINDOW_HEIGHT)
	{
		x = -1;
		while (++x < WINDOW_WIDTH)
			generate_fractal(data, x, y);
	}
	mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, 0, 0);
}