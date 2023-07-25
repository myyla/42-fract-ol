/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 06:13:41 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/24 18:16:50 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
#define FRACTOL_H

# include "mlx.h"
# include <math.h>
# include <stdio.h>
# include <stdlib.h>

/*  Dimensions	*/
# define WINDOW_WIDTH 900
# define WINDOW_HEIGHT 900
# define MAX_ITERATIONS 60

/*  Fractal sets	*/
# define MANDELBROT 1
# define JULIA 2
# define TRICORN 3

/*	Structures	*/
typedef struct	s_data {
	void	*mlx;
	void	*mlx_win;
	void	*img;
	char	*addr;
	char	*buf;
	double	min_x;
	double	max_x;
	double	min_y;
	double	max_y;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		color;
	int		set;
}			t_data;

typedef struct s_zpoint{
	double	a;
	double	b;
}t_zpoint;

/*	Functions' Prototypes	*/
int mandelbrot(double a, double b);
void generate_mandelbrot(t_data image);

#endif
