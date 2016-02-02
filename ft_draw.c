/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:23:00 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 17:54:01 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw(t_graph *graph)
{
	int	x;
	int	y;

	mlx_clear_window(graph->mlx, graph->win);
	x = 200;
	while (x < 300)
	{
		y = 200;
		while (y < 300)
		{
			mlx_pixel_put(graph->mlx, graph->win, x + graph->x_offset,
					y + graph->y_offset, (x - 200) * 256 / 100 * 0x00010000 +
					(y - 200) * 256 / 100 * 0x00000100);
			y++;
		}
		x++;
	}
}
