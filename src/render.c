/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:14:34 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/24 17:25:35 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fractol.h"

void	render(t_data *data)
{
	int		x;
	int		y;

	y = -1;
	while (++y < WINDOW_HEIGHT)
	{
		x = -1;
		while (++x < WINDOW_WIDTH)
			render_fractal(data, x, y);
	}
	mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, 0, 0);
}
