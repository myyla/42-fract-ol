/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 06:13:41 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/03 10:30:47 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/*  Dimensions	*/
# define WINDOW_WIDTH 500
# define WINDOW_HEIGHT 500

/*  Fractal sets	*/
# define MANDELBROT 1
# define JULIA 2
# define TRICORN 3

/*	Structures	*/
typedef struct s_zpoint{
	double	a;
	double	b;
}t_zpoint;

typedef struct s_data{
	void		*mlx;
	void		*mlx_win;
	void		*img;
	char		*addr;
	double		min_x;
	double		max_x;
	double		min_y;
	double		max_y;
	double		zoom;
	double		key_lrud;
	double		fctl;
	double		pctl;
	int			bits_per_pixel;
	int			color;
	int			endian;
	int			iter;
	int			line_length;
	int			set;
	t_zpoint	julia_c;
}t_data;

/*	Functions' Prototypes	*/
char	*ft_strchr(const char *s, int c);
double	ft_float_atoi(char *str);
double	init_x(double x, double max_x, double min_x);
double	init_y(double y, double max_y, double min_y);
int		close_window(t_data *data);
int		ft_strcmp(const char *s1, const char *s2);
int		julia(t_data *data, double a, double b);
int		mandelbrot(t_data *data, double a, double b);
int		press_key(int keycode, t_data *data);
int		set_pixel_color(t_data *data, int value, int color);
int		scroll_updown(int keycode, int x, int y, t_data *data);
int		tricorn(t_data *data, double a, double b);
size_t	ft_strlen(const char *s);
void	color_key(t_data *data);
void	ft_putendl_fd(char *s, int fd);
void	get_julia_c_values(t_data *data, char **av);
void	help_msg(void);
void	initialize(t_data *data);
void	render(t_data *data);
void	zoom_in(t_data	*data, int x, int y);
void	zoom_out(t_data	*data, int x, int y);

#endif
