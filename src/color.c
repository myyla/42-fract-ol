/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:06:09 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/01 16:53:52 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fractol.h"

/* set_pixel_color:
	Add a color to one pixel of the MLX image map.
	The MLX image is composed of 32 bits per pixel.
	Color ints are stored from right to left, here, and are in
	the form of 0xAARRGGBB. 8 bits encode each color component,
	Alpha (Transparency), Red, Green and Blue.
	Bit shifting:
		- BB >> 0   (0x000000BB)
		- GG >> 8   (0x0000GG00)
		- RR >> 16  (0x00RR0000)
		- AA >> 24  (0xAA000000)
*/
int set_pixel_color(t_data *data, int value, int x, int y, int color)
{
	int r;
	int g;
	int b;
	
	if (value >= data->iter)
		return(0);
	else if (!value)
		return (0);
	else
		{
			b = (int)((1 + sin(0.1 * value + 2.0)) / 2 * 40.9 * (255/40));
			r = (int)((1 + sin(0.1 * value)) / 2 * 40.7 * (255/40));
			g = (int)((1 + sin(0.1 * value + 8.0)) / 2 * 40.0 * (255/40));
			color = (r << 16) | (g << 8) | b;
		}
	return(color);
}

void	color_key(t_data *data)
{
	static int	i;

	if (i == 6)
		i = 0;
	if (i < 6 && data)
	{
		if (i == 0)
			data->my_color = 0x87CEFA;
		else if (i == 1)
			data->my_color = 0x00FF7F;
		else if (i == 2)
			data->my_color = 0xFFD700;
		else if (i == 3)
			data->my_color = 0xEE82EE;
		else if (i == 4)
			data->my_color = 0xFFA500;
		else if (i == 5)
			data->my_color = 0xFF69B4;
		i++;
	}
}
	// data->addr[x * 4 + y * WINDOW_WIDTH * 4] = color;
	// data->addr[x * 4 + y * WINDOW_WIDTH * 4 + 1] = color >> 8;
	// data->addr[x * 4 + y * WINDOW_WIDTH * 4 + 2] = color >> 16;
	// data->addr[x * 4 + y * WINDOW_WIDTH * 4 + 3] = color >> 24;