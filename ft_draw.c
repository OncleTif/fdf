/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:23:00 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/12 12:42:01 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw(t_graph *grp)
{
	t_node	*nd;
	t_node	*line;

	mlx_clear_window(grp->mlx, grp->win);
	line = grp->node;
	while (line)
	{
		nd = line;
		while (nd)
		{
			ft_projector_iso(grp, nd);
			nd->color = 0x00FFFFFF;
			if (nd->z > 1)
				nd->color = 0x00FF0000;
			if (ft_limiter(nd->p_x, nd->p_y, grp))
				mlx_pixel_put(grp->mlx, grp->win, nd->p_x, nd->p_y, nd->color);
			if (nd->up)
				ft_draw_line(nd, nd->up, grp);
			if (nd->lft)
				ft_draw_line(nd, nd->lft, grp);
			nd = nd->rgt;
		}
		line = line->dwn;
	}
	ft_text(grp);
}
