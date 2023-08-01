/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 03:07:35 by amtouham          #+#    #+#             */
/*   Updated: 2023/08/01 10:19:08 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	n--;
	while ((s1[i] == s2[i]) && s1[i] && i < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			s;
	long long	res;

	i = 0;
	s = 1;
	res = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		s = 1 - 2 * (str[i++] == '-');
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		res = 10 * res + str[i++] - '0';
	return (res * s);
}


double	getint(char *str)
{
	int			i;
	int			j;
	int			s;
	double	res;

	i = 0;
	s = 1;
	res = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		s = 1 - 2 * (str[i++] == '-');
	j = i;
	while (str[i] && str[i] != '.' && str[i] >= '0' && str[i] <= '9')
		res = 10.0 * res + str[i++] - '0';
	if (j == i)
	{
		write(2, "error\n", 6);
		exit(1);
	}
	return (res * s);
}

double	getfrac(char *str)
{
	int 		i;
	double	res;
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
	{
		write(2, "error\n", 6);
		exit(1);
	}
	return (res);
	// first char after . should be digit .. if not error
	// while digit we do the equation to count the fractional part 
	// if the loop ends we check if it's the end of the string .. if not error
}

double ft_float_atoi(char *str)
{
	double	res1;
	double	res2;
	
	res1 = getint(str);
	printf("[%f]\n", res1);
	res2 = getfrac(str);
	printf("[%f]\n", res2);
	return (res1 + res2);
}