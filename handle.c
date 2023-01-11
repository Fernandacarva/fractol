/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:15:13 by ferncarv          #+#    #+#             */
/*   Updated: 2023/01/11 16:20:25 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	mouse(int button, int x, int y, t_data *img)
{
	double	zoom;
	double	center_r;
	double	center_i;

	x = x - y;
	center_r = img->min_r - img->max_r;
	center_i = img->max_i - img->min_i;
	if (button == 4)
	{
		zoom = 0.9;
		img->max_r = img->max_r + (center_r - zoom * (center_r)) / 2;
		img->min_r = img->max_r + zoom * (center_r);
		img->min_i = img->min_i + (center_i - zoom * center_i) / 2;
		img->max_i = img->min_i + zoom * center_i;
	}
	if (button == 5)
	{
		zoom = 1.1;
		img->max_r = img->max_r + (center_r - zoom * (center_r)) / 2;
		img->min_r = img->max_r + zoom * (center_r);
		img->min_i = img->min_i + (center_i - zoom * center_i) / 2;
		img->max_i = img->min_i + zoom * center_i;
	}
	if (img->argc == 2)
		line_pixel(img);
	else
		pixel_julia(img);
	return (0);
}

int	keyboard(int key, t_data *img)
{
	if (key ==


}
