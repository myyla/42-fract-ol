/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:12:46 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/29 13:28:14 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fractol.h"

void	initialize(t_data *data)
{
	data->mlx = mlx_init();
	data->mlx_win = mlx_new_window(data->mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "FRACT'OL");
	data->img = mlx_new_image(data->mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
	data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel, &data->line_length, &data->endian);
	data->iter = 100;
	data->min_x = -2.0;
	data->max_x = 2.0;
	data->min_y = -2.0;
	data->max_y = 2.0;
	data->my_color = 16724019;
	data->color_index = 1;
	data->zoom = 0.5;
	data->key_lrud = 0.5;
}

void	get_julia_c_values(t_data *data, char **av)
{
	data->julia_c.a = ft_float_atoi(av[2]);
	data->julia_c.b = ft_float_atoi(av[3]);
	if (data->julia_c.a > 2.0 || data->julia_c.a < -2.0)
		help_msg();
	if (data->julia_c.b >= 2.0 || data->julia_c.b <= -2.0)
		help_msg();
 }