/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:06:09 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/04 13:52:28 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	set_pixel_color(t_data *data, int value, int color)
{
	int	r;
	int	g;
	int	b;

	if (!value)
		return (0);
	b = (int)((1 + sin(data->fctl * value + data->pctl)) \
		/ 2 * 40.9 * (255 / 40));
	r = (int)((1 + sin(data->fctl * value)) / 2 * 40.7 * (255 / 40));
	g = (int)((1 + sin(data->fctl * value + (data->pctl * 4.0))) \
		/ 2 * 40.0 * (255 / 40));
	color = (r << 16) | (g << 8) | b;
	return (color);
}

void	color_key(t_data *data)
{
	static int	i;

	if (i == 7)
		i = 0;
	if (i < 7 && data)
	{
		(i == 0) && (data->fctl = 0.25) && (data->pctl = 1.9);
		(i == 1) && (data->fctl = 0.25) && (data->pctl = 1.8);
		(i == 2) && (data->fctl = 0.25) && (data->pctl = 1.6);
		(i == 3) && (data->fctl = 0.25) && (data->pctl = 1.5);
		(i == 4) && (data->fctl = 0.25) && (data->pctl = 1.4);
		(i == 5) && (data->fctl = 0.25) && (data->pctl = 2.0);
		(i == 6) && (data->fctl = 0.2) && (data->pctl = 2.0);
		i++;
	}
}
