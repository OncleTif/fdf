/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:23:00 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/11 14:08:13 by tmanet           ###   ########.fr       */
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
			ft_projector_iso(grp, node);
			node->color = 0x00FFFFFF;
			if (node->z > 1)
				node->color = 0x00FF0000;
			mlx_pixel_put(grp->mlx, grp->win,
					node->p_x, node->p_y, node->color);
			if (node->up)
				ft_draw_line(node, node->up, grp);
			if (node->lft)
				ft_draw_line(node, node->lft, grp);
			node = node->rgt;
		}
		line = line->dwn;
	}
}
