/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 08:32:10 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/01 12:07:54 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fractol.h"

static void	key_lrud(int keycode, t_data *data )
{
	if (keycode == 123)
	{
		data->max_x += data->key_lrud;
		data->min_x += data->key_lrud;
		render(data);
	}
	else if (keycode == 124)
	{
		data->max_x -= data->key_lrud;
		data->min_x -= data->key_lrud;
		render(data);
	}
	else if (keycode == 125)
	{
		data->max_y += data->key_lrud;
		data->min_y += data->key_lrud;
		render(data);
	}
	else if (keycode == 126)
	{
		data->max_y -= data->key_lrud;
		data->min_y -= data->key_lrud;
		render(data);
	}
}

int	press_key(int keycode, t_data *data)
{
	if (keycode == 53)
		close_window(data);
	key_lrud(keycode, data);
	if (keycode == 8)
	{
		color_key(data);
		render(data);
	}
	return (0);
}

int	close_window(t_data *data)
{
	mlx_destroy_image(data->mlx, data->img);
	mlx_destroy_window(data->mlx, data->mlx_win);
	exit(0);
}