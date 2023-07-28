/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 06:13:41 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/27 15:26:51 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
#define FRACTOL_H

# include "mlx.h"
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/*  Dimensions	*/
# define WINDOW_WIDTH 900
# define WINDOW_HEIGHT 900
# define MAX_ITERATIONS 60

/*  Fractal sets	*/
# define MANDELBROT 1
# define JULIA 2
# define KOCH 3

/*	Structures	*/
typedef struct	s_data {
	void	*mlx;
	void	*mlx_win;
	void	*img;
	char	*addr;
	double	min_x;
	double	max_x;
	double	min_y;
	double	max_y;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		color;
	int		my_color;
	int		set;
	int		iter;
}t_data;

typedef struct s_zpoint{
	double	a;
	double	b;
}t_zpoint;

/*	Functions' Prototypes	*/
size_t	ft_strlen(const char *s);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int mandelbrot(double a, double b);
void	render(t_data *data);
void	initialize(t_data *data);
int	set_pixel_color(t_data *data, int value, int x, int y, int color);

#endif
