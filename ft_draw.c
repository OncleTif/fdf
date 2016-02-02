/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:23:00 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 18:30:24 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw(t_graph *graph)
{
	int	x;
	int	y;

	mlx_clear_window(graph->mlx, graph->win);
	y = 0;
	while (y < graph->grid->y_max)
	{
		x = 0;
		while (x < graph->grid->x_max)
		{
			mlx_pixel_put(graph->mlx, graph->win, (x - graph->grid->x_mid)* graph->zoom + graph->x_offset,
					(y - graph->grid->y_mid) * graph->zoom + graph->y_offset, 0x00FFFFFF);
			//mlx_pixel_put(graph->mlx, graph->win, x * 5 + graph->x_offset,
			//		y * 5 + graph->y_offset, (x - 200) * 256 / 100 * 0x00010000
			//		+ (y - 200) * 256 / 100 * 0x00000100);
			x++;
		}
		y++;
	}
}
