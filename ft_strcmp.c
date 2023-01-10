/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:12:35 by ferncarv          #+#    #+#             */
/*   Updated: 2023/01/10 16:25:36 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	count;

	count = 0;
	while ((s1[count] != '\0' && s2[count]) != '\0')
	{
		if (s1[count] != s2[count])
			return ((unsigned char) s1[count] - ((unsigned char) s2[count]));
		count++;
	}
	return ((unsigned char) s1[count] - ((unsigned char) s2[count]));
}
