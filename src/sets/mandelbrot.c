/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 07:24:12 by amtouham          #+#    #+#             */
/*   Updated: 2023/07/24 17:41:13 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

/*	The mandelbrot function takes two double arguments a and b representing the real
 	and imaginary parts of a complex number*/
int mandelbrot(double a, double b)
{
	t_zpoint	z;
	t_zpoint	c;
	t_zpoint	new_z;
	int	i;

	z.a = 0;
	z.b = 0;
	c.a = a;
	c.b = b;
	i = 0;
	while(i++ < 100){
		new_z.a  = z.a * z.a - z.b * z.b + c.a;
		new_z.b = 2 * z.a * z.b + c.b;
		z.a = new_z.a;
		z.b = new_z.b;
		if(z.a * z.a + z.b * z.b > 4)
			return (i);
	}
	return (0);
}

/*	Function to generate the Mandelbrot set image by iterating over all the pixels 
	in the image and calculating the corresponding complex number, then calling the mandelbrot 
	function to determine the color of the pixel.*/
/*	index -> calculates the index of the current pixel in the image array, which is a one-dimensional 
	array that stores the RGB color values of each pixel. The index is computed by multiplying the row (j)
	by the width of the image (WIDTH), adding the column (i), and then multiplying by 3, because each pixel has 
	three color components (red, green, and blue).*/

// void generate_mandelbrot(t_data *data){
// 	t_zpoint z;
// 	int	i;
// 	int	j;
// 	int	index;
// 	int	value;
	
// 	i = 0;
// 	j = 0;
// 	while(j++ < WINDOW_HEIGHT)
// 	{
// 		while(i++ < WINDOW_WIDTH)
// 		{
// 			z.a = (double)i / WINDOW_WIDTH * 4.0 - 2.5;
// 			z.b = (double)j / WINDOW_HEIGHT * 4.0 - 2.0;
// 			index = (j * WINDOW_WIDTH + i) * 3;
// 			value = mandelbrot(z.a,z.b);
// 		}
// 	}
// }