/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_printer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 15:44:33 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 16:08:59 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_grid_printer(t_grid *grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < grid->y_max)
	{
		j = 0;
		while (j < grid->x_max)
		{
			ft_putnbr(grid->map[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
