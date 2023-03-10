/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:15:13 by ferncarv          #+#    #+#             */
/*   Updated: 2023/01/16 12:45:15 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	mouse(int button, int x, int y, t_data *img)
{
	double	center_r;
	double	center_i;

	x = x - y;
	center_r = img->min_r - img->max_r;
	center_i = img->max_i - img->min_i;
	if (button == 4)
	{
		img->max_r = img->max_r + (center_r - 0.9 * (center_r)) / 2;
		img->min_r = img->max_r + 0.9 * (center_r);
		img->min_i = img->min_i + (center_i - 0.9 * center_i) / 2;
		img->max_i = img->min_i + 0.9 * center_i;
	}
	if (button == 5)
	{
		img->max_r = img->max_r + (center_r - 1.1 * (center_r)) / 2;
		img->min_r = img->max_r + 1.1 * (center_r);
		img->min_i = img->min_i + (center_i - 1.1 * center_i) / 2;
		img->max_i = img->min_i + 1.1 * center_i;
	}
	if (img->argc == 2)
		line_pixel(img);
	else
		pixel_julia(img);
	return (0);
}

int	handle_close(t_data *img)
{
	mlx_destroy_window(img->mlx, img->mlx_win);
	exit(0);
	return (0);
}

int	keyboard(int key, t_data *img)
{
	if (key == 53)
	{
		mlx_destroy_window(img->mlx, img->mlx_win);
		exit(0);
	}
	else if (key == 126)
		img->focus -= 0.1;
	else if (key == 125)
		img->focus += 0.1;
	else if (key == 124)
		img->focus_rm -= 0.1;
	else if (key == 123)
		img->focus_rm += 0.1;
	if (img->argc == 2)
		line_pixel(img);
	else
		pixel_julia(img);
	return (0);
}
