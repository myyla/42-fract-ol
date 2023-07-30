/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 06:13:41 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/30 09:38:04 by amtouham         ###   ########.fr       */
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

/*  Fractal sets	*/
# define MANDELBROT 1
# define JULIA 2
# define KOCH 3

/*	Structures	*/
typedef struct s_zpoint{
	double	a;
	double	b;
}t_zpoint;

typedef struct	s_data {
	void	*mlx;
	void	*mlx_win;
	void	*img;
	char	*addr;
	double	min_x;
	double	max_x;
	double	min_y;
	double	max_y;
	double	zoom;
	double	key_lrud;
	double	color_index;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		color;
	int		my_color;
	int		set;
	int		iter;
	t_zpoint julia_c;
}t_data;

/*	Functions' Prototypes	*/
char	*ft_strchr(const char *s, int c);
double	ft_float_atoi(const char *str);
double	init_x(double x, double max_x, double min_x);
double	init_y(double y, double max_y, double min_y);
int	close_window(t_data *data);
int	ft_atoi(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	julia(t_data *data, double a, double b);
int	help_msg(void);
int mandelbrot(t_data *data, double a, double b);
int	press_key(int keycode, t_data *data);
int	set_pixel_color(t_data *data, int value, int x, int y, int color);
int scroll_updown(int keycode, int x, int y, t_data *data);
size_t	ft_strlen(const char *s);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	get_julia_c_values(t_data *data, char **av);
void	initialize(t_data *data);
void	render(t_data *data);

#endif
