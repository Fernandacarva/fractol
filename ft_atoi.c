/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:02:43 by ferncarv          #+#    #+#             */
/*   Updated: 2023/01/10 17:25:30 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_atoi(const char *str)
{
	int	num1;
	int	neg;
	int	receive;

	num1 = 0;
	neg = 1;
	receive = 0;
	while ((str[num1] >= 9 && str[num1] <= 13) || str[num1] == 32)
		num1++;
	if (str[num1] == '-')
		neg = -1;
	if (str[num1] == '+' || str[num1] == '-')
		num1++;
	while (ft_isdigit(str[num1]) && str[num1] != 0)
	{
		receive = receive * 10 + (str[num1] - '0');
		num1++;
	}	
	return (receive * neg);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
