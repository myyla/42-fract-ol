/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sets.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:54:46 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/31 11:00:19 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

/*	The mandelbrot function takes two double arguments a and b representing the real
 	and imaginary parts of a complex number*/
int mandelbrot(t_data *data,double a, double b)
{
	t_zpoint	z;
	t_zpoint	c;
	t_zpoint	new_z;
	double	i;

	z.a = 0;
	z.b = 0;
	c.a = a;
	c.b = b;
	i = -1;
	while(++i < data->iter){
		new_z.a  = z.a * z.a - z.b * z.b + c.a;
		new_z.b = 2 * z.a * z.b + c.b;
		z.a = new_z.a;
		z.b = new_z.b;
		if(z.a * z.a + z.b * z.b > 4)
			return (i);
	}
	return (0);
}

int	julia(t_data *data, double a, double b)
{
	t_zpoint z;
	t_zpoint new_z;
	double i;

	z.a = a;
	z.b = b;
	i = -1;
	while(++i < data->iter){
		new_z.a = z.a * z.a - z.b * z.b + data->julia_c.a;
		new_z.b = 2 * z.a * z.b + data->julia_c.b;
		z.a = new_z.a;
		z.b = new_z.b;
		if(z.a * z.a + z.b * z.b > 4)
			return (i);
	}
	return (0);
}

int tricorn(t_data *data,double a, double b)
{
	t_zpoint	z;
	t_zpoint	c;
	t_zpoint	new_z;
	double	i;

	z.a = 0;
	z.b = 0;
	c.a = a;
	c.b = b;
	i = -1;
	while(++i < data->iter){
		new_z.a  = z.a * z.a - z.b * z.b + c.a;
		new_z.b = -2 * z.a * z.b + c.b;
		z.a = new_z.a;
		z.b = new_z.b;
		if(z.a * z.a + z.b * z.b > 4)
			return (i);
	}
	return (0);
}