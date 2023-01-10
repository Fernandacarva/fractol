/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:43:21 by ferncarv          #+#    #+#             */
/*   Updated: 2023/01/10 17:50:16 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define WIDTH 800
# define HEIGHT 800
# define MAX_ITERATIONS 100
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "./minilib/mlx.h"


typedef struct	t_data{
	void	*mlx;
	void	*mlx_win;
	void	*img;
	char	*addr;
	int		bit_per_pixel;
	int		line_length;
	int		endian;
	int		x;
	int		y;
	double	min_r;
	double	max_r;
	double	min_i;
	double	max_i;
	int		set_julia;
} t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	line_pixel(t_data *img);
void	pixel_julia(t_data *img);
void	mandelbrot(t_data *img, double cr, double ci);
void	julia(t_data *img, double zr, double zi);
int		ft_strcmp(const char *s1,const char *s2);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		error(int argc, char **argv);
void	error_msg(void);
#endif
