/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:06:09 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/24 17:12:12 by amtouham         ###   ########.fr       */
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
static void	set_pixel_color(t_data	*data, int a, int b, int color)
{
		data->buf[a * 4 + b * WINDOW_WIDTH * 4] = color;
		data->buf[a * 4 + b * WINDOW_WIDTH * 4 + 1] = color >> 8;
		data->buf[a * 4 + b * WINDOW_WIDTH * 4 + 2] = color >> 16;
		data->buf[a * 4 + b * WINDOW_WIDTH * 4 + 3] = color >> 24;
}