/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:06:09 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/02 07:07:06 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fractol.h"

int set_pixel_color(t_data *data, int value, int color)
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
			b = (int)((1 + sin(data->cctl * value + 2.0)) / 2 * 40.9 * (255/40));
			r = (int)((1 + sin(data->cctl * value)) / 2 * 40.7 * (255/40));
			g = (int)((1 + sin(data->cctl * value + 8.0)) / 2 * 40.0 * (255/40));
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
			data->cctl = 0.2;
		else if (i == 1)
			data->cctl = 0.3;
		else if (i == 2)
			data->cctl = 0.4;
		else if (i == 3)
			data->cctl = 0.5;
		else if (i == 4)
			data->cctl = 0.6;
		else if (i == 5)
			data->cctl = 0.7;
		i++;
	}
}