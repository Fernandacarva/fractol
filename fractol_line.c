/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:05:24 by ferncarv          #+#    #+#             */
/*   Updated: 2023/01/03 17:27:17 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	line_pixel(int x, int y)
{
	while (x < 400)
	{
		y = 0;
		printf("Para a linha (x): %d\n", x);
		x++;
		while (y < 400)
		{
			printf("Analisando coluna(y): %d\n", y);
			my_mlx_pixel_put(&img, x, y, 0x00FF1CAE);
			y++;
		}
	}
}
