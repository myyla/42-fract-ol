/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:14:34 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/01 15:35:07 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fractol.h"


static void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;
	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

static void	generate_fractal(t_data *data, int x, int y)
{
	int	value;
	
	if (data->set == MANDELBROT)
		value = mandelbrot(data, init_x(x, data->max_x, data->min_x),
				init_y(y, data->max_y, data->min_y));
	else if (data->set == JULIA)
	 	value = julia(data,init_x(x, data->max_x, data->min_x),
				init_y(y, data->max_y, data->min_y));
	else if (data->set == TRICORN)
	 	value = tricorn(data,init_x(x, data->max_x, data->min_x),
				init_y(y, data->max_y, data->min_y));
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