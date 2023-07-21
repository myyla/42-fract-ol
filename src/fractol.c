/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:46:24 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/21 20:47:53 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

// int main()
// {
// 	printf("[from Makefile]\n");
// }

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

//Now that we know where to write, it becomes very easy to write a function that will mimic 
//the behaviour of mlx_pixel_put but will simply be many times faster:

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

// // --------------------DRAW A SINGLE PIXEL
// int	main(void)
// {
// 	void	*mlx;
// 	void	*mlx_win;
// 	t_data	img;

// 	mlx = mlx_init();
// 	mlx_win = mlx_new_window(mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "Hello world!");
// 	img.img = mlx_new_image(mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
// 	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
// 								&img.endian);
// 	my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
// 	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
// 	mlx_loop(mlx);
// }

// ------------------------------DRAW A LINE
void my_mlx_line_pixel_put(t_data *data, int y, int color)
{
	int x = 0;
	
	while (x <= 100)
	{
		my_mlx_pixel_put(data, x, y, color);
		x++;
	}
}

// void my_mlx_square_pixel_put(t_data *data, int color)
// {
// 	int x = 0;
	
// 	while (x <= 100)
// 	{
// 		my_mlx_line_pixel_put(data, x , color);
// 		x++;
// 	}
// }

void my_mlx_square_pixel_put(t_data *data,int s

int main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	// int i = -1;
	
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx,WINDOW_WIDTH,WINDOW_HEIGHT,"Line");
	img.img = mlx_new_image(mlx,WINDOW_WIDTH,WINDOW_HEIGHT);
	img.addr = mlx_get_data_addr(img.img,&img.bits_per_pixel,&img.line_length,&img.endian);
	// my_mlx_line_pixel_put(&img, 255);
	// while (++i <= 100)
		my_mlx_square_pixel_put(&img, 255);
	mlx_put_image_to_window(mlx,mlx_win,img.img,0,0);
	mlx_loop(mlx);
}
