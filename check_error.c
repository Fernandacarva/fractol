/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:52:16 by ferncarv          #+#    #+#             */
/*   Updated: 2023/01/10 17:51:36 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void 	error_msg(void)
{
	write(1, "Try one of these options\n", 25);
	write(1, "./fractol julia 1\n", 18);
	write(1, "./fractol julia 2\n", 18);
	write(1, ".fractol mandelbrot\n", 21);
	exit(0);
}

int	error(int argc, char **argv)
{
	int	value;
	int i;

	i = 0;
	if (ft_strcmp(argv[1], "julia") == 0 && argc == 3)
	{

		while (argv[2][i])
		{
			if (ft_isdigit(argv[2][i]) == 0)
					error_msg();
			i++;
		}
		value = ft_atoi(argv[2]);
		if (value == 1)
			return (1);
		if (value == 2)
			return (2);
	}
	if (ft_strcmp(argv[1], "mandelbrot") == 0 && argc == 2)
		return (3);
	error_msg();
	return (0);
}
