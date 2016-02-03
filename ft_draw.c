/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:23:00 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/03 18:02:28 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw(t_graph *grp)
{
	t_node	*node;
	t_node	*line;

	mlx_clear_window(grp->mlx, grp->win);
	line = grp->node;
	while (line)
	{
		node = line;
		while (node)
		{
			node->p_x = node->x * grp->zoom + grp->x_offset;
			node->p_y = node->y * grp->zoom + grp->y_offset;
			node->color = 0x00FFFFFF;
			mlx_pixel_put(grp->mlx, grp->win, node->p_x, node->p_y, node->color);
			//mlx_pixel_put(graph->mlx, graph->win, x * 5 + graph->x_offset,
			//		y * 5 + graph->y_offset, (x - 200) * 256 / 100 * 0x00010000
			//		+ (y - 200) * 256 / 100 * 0x00000100);
			if (node->up)
			ft_draw_line(node, node->up, grp);
			if (node->lft)
			ft_draw_line(node, node->lft, grp);
			node = node->rgt;
		}
		line = line->dwn;
	}
}
