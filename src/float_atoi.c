/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:49:40 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/03 06:01:12 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static double	getint(char *str, int *s)
{
	int			i;
	int			j;
	double		res;

	i = 0;
	*s = 1;
	res = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		*s = 1 - 2 * (str[i++] == '-');
	j = i;
	while (str[i] && str[i] != '.' && str[i] >= '0' && str[i] <= '9')
		res = 10.0 * res + str[i++] - '0';
	if (j == i)
		help_msg();
	return (res);
}

/* First char after . should be digit .. if not error
*  while digit we do the equation to count the fractional part 
*  if the loop ends we check if it's the end of the string .. if not error
*/

static double	getfrac(char *str)
{
	int			i;
	double		res;
	double		div;

	i = 0;
	res = 0;
	div = 0.1;
	while (str[i] && str[i] != '.')
		i++;
	i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res + ((str[i] - '0') * div);
		div *= 0.1;
		i++;
	}
	if (str[i])
		help_msg();
	return (res);
}

double	ft_float_atoi(char *str)
{
	double	res1;
	double	res2;
	int		sign;

	res1 = getint(str, &sign);
	res2 = getfrac(str);
	return ((res1 + res2) * sign);
}
