/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:06:09 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/28 09:35:59 by amtouham         ###   ########.fr       */
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
	if (value >= MAX_ITERATIONS)
		data->color = 0;
	else
		data->color = data->my_color* value;
	// data->addr[x * 4 + y * WINDOW_WIDTH * 4] = color;
	// data->addr[x * 4 + y * WINDOW_WIDTH * 4 + 1] = color >> 8;
	// data->addr[x * 4 + y * WINDOW_WIDTH * 4 + 2] = color >> 16;
	// data->addr[x * 4 + y * WINDOW_WIDTH * 4 + 3] = color >> 24;
	return(color);
}