/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:46:24 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/04 11:28:45 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_parse(t_data *data, int ac, char **av)
{
	if (ac == 1)
		help_msg();
	if (ac == 2 && !ft_strcmp("mandelbrot", av[1]))
		data->set = MANDELBROT;
	else if (ac == 2 && !ft_strcmp("julia", av[1]))
	{
		data->set = JULIA;
		data->julia_c.a = -0.8;
		data->julia_c.b = 0.156;
	}
	else if (ac == 2 && !ft_strcmp("tricorn", av[1]))
		data->set = TRICORN;
	else if (ac == 4 && !ft_strcmp("julia", av[1]))
	{
		data->set = JULIA;
		if (!ft_strchr(av[2], '.') || !ft_strchr(av[3], '.'))
			help_msg();
		get_julia_c_values(data, av);
	}
	else
		help_msg();
}

int	main(int ac, char **av)
{
	t_data	data;

	ft_parse(&data, ac, av);
	initialize(&data);
	render(&data);
	mlx_mouse_hook(data.mlx_win, scroll_updown, &data);
	mlx_hook(data.mlx_win, 2, 0, press_key, &data);
	mlx_hook(data.mlx_win, 17, 0, close_window, &data);
	mlx_loop(data.mlx);
}
