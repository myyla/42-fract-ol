/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_factory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:14:29 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/22 13:59:08 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fractol.h"

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

// // --------------------DRAW A SINGLE PIXEL---------------------------------------
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

// ------------------------------DRAW A LINE--------------------------------------------
// void my_mlx_line_put(t_data *data, int x, int y, int color, int llen)
// {
// 	int fx = x;
	
// 	while (x <= llen + fx)
// 	{
// 		my_mlx_pixel_put(data, x, y, color);
// 		x++;
// 	}
// }

// ------------------------------DRAW A SQUARE Usings line-put--------------------------------------------
// void my_mlx_square_put(t_data *data,int x, int y, int color, int llen)
// {
// 	int fy = y;
	
// 	while( y <= llen +fy)
// 	{
// 		my_mlx_line_put(data, x, y, color, llen);
// 		y++;
// 	}
// }

// ------------------------------DRAW A SQUARE Using pixel-put--------------------------------------------
void my_mlx_square_put(t_data *data, int x, int y , int color, int llen)
{
	int fx = x;
	int fy = y;
	while(y <= llen + fy){
		x = fx;
		while(x <= llen + fx)
		{
			my_mlx_pixel_put(data, x, y, color);
			x++;
		}
		y++;
	}
}

// --------------------------DRAW MULTI-SQUARE -----------------------------------------------------------

void my_mlx_multisquare_put(t_data *data, int x, int y, int color,int slen, int mslen)
{
	int fx = x;
	int fy = y;
	while( y <= mslen + fy)
	{
		x = fx;
		while(x <= mslen +fx)
		{
			my_mlx_square_put(data, x, y, color, slen);
			x++;
		}
		y++;
	}
}

// -----------------------DRAW CUSTOMIZED MULTI-SQUARE ---------------------------------------------------

// void my_mlx_czmultisquare_put(t_data *data ,int x ,int y, int rx , int ry, int color, int slen, int mslen, int rmslen)
// {
	
// }
	
int main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx,WINDOW_WIDTH,WINDOW_HEIGHT,"Line");
	img.img = mlx_new_image(mlx,WINDOW_WIDTH,WINDOW_HEIGHT);
	img.addr = mlx_get_data_addr(img.img,&img.bits_per_pixel,&img.line_length,&img.endian);
	// my_mlx_line_put(&img,0,255);
	//my_mlx_square_put(&img, 0, 0, 255, 10);
	my_mlx_multisquare_put(&img,0,0,255,100,10);
	mlx_put_image_to_window(mlx,mlx_win,img.img,0,0);
	mlx_loop(mlx);
}


