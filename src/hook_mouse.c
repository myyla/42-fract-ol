/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_mouse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 07:43:27 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/02 10:55:57 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void zoom_in(t_data	*data, int x, int y)
{
	double new_x;
	double new_y;		
		
	new_x = init_x(x, data->max_x, data->min_x);
	new_y = init_y(y, data->max_y, data->min_y);
	data->max_x = (data->max_x + new_x) * data->zoom;
	data->max_y = (data->max_y + new_y) * data->zoom;
	data->min_x = (data->min_x + new_x) * data->zoom;
	data->min_y = (data->min_y + new_y) * data->zoom;
	data->iter += 10;
	data->key_lrud *= data->zoom;
	render(data);
}

void	zoom_out(t_data	*data, int x, int y)
{
	double new_x;
	double new_y;
	
	new_x = init_x(x, data->max_x, data->min_x);
	new_y = init_y(y, data->max_y, data->min_y);
	data->max_x = (data->max_x / data->zoom) - new_x;
	data->max_y = (data->max_y / data->zoom) - new_y;
	data->min_x = (data->min_x / data->zoom) - new_x;
	data->min_y = (data->min_y / data->zoom) - new_y;
	data->iter -= 10;
	data->key_lrud /= data->zoom;
	render(data);
}

int scroll_updown(int keycode, int x, int y, t_data *data)
{
	if(keycode == 4)
		zoom_in(data, x, y);
	else if(keycode == 5)
		zoom_out(data, x, y);
	return(0);
}