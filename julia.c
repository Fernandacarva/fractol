/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:48:11 by ferncarv          #+#    #+#             */
/*   Updated: 2023/01/11 15:54:12 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	put_color_julia(t_data *img, int x, int y, int n)
{
	if (n >= 0 && n <= 10)
		my_mlx_pixel_put(img, x, y, 0xFF00FF);
	if (n > 10 && n < 20)
		my_mlx_pixel_put(img, x, y, 0x9400D3);
	if (n >= 20 && n <= 30)
		my_mlx_pixel_put(img, x, y, 0x4B0082);
	if (n > 30 && n < 40)
		my_mlx_pixel_put(img, x, y, 0xFF1493);
	if (n >= 40 && n <= 50)
		my_mlx_pixel_put(img, x, y, 0xDC143C);
	if (n > 50 && n < 60)
		my_mlx_pixel_put(img, x, y, 0xFF6347);
	if (n >= 60 && n <= 70)
		my_mlx_pixel_put(img, x, y, 0xFFFF00);
	if (n > 70 && n < 80)
		my_mlx_pixel_put(img, x, y, 0xFFDAB9);
	if (n >= 80 && n <= 90)
		my_mlx_pixel_put(img, x, y, 0xE6E6FA);
	if (n > 90 && n <= 100)
		my_mlx_pixel_put(img, x, y, 0xE0FFFF);
}

void	julia(t_data *img, double zr, double zi)
{
	 int	n;
	 double	tmp;
	 int	is_in_set;
	 double	real;
	 double	imagy;

	 if (img->set_julia == 1)
	 {
		imagy = 0.355;
		real = 0.355;
	 }
	 if (img->set_julia == 2)
	 {
		real = 0.34;
		imagy = (-0.05);
	 }
	 n = -1;
	 is_in_set = 1;
	 while (++n < MAX_ITERATIONS)
	 {
		 if ((zr * zr + zi * zi) > 4.0)
		 {
			is_in_set = 0;
			break;
		 }
		tmp = 2 * zr * zi + imagy;
		zr = zr * zr - zi * zi + real;
		zi = tmp;
	 }
	if (is_in_set == 1)
		my_mlx_pixel_put(img, img->x, img->y, 0x000000);
	else
		put_color_julia(img, img->x, img->y, n);
}
