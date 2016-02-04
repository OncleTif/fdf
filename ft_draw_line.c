/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 16:37:05 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 17:03:17 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw_line(t_node *node1, t_node *node2, t_graph *grp)
{
	t_line	line;
	t_line	*ln;

	ln = &line;
	ft_line_init(node1, node2, ln);
	while (!(ln->px == node2->p_x && ln->py == node2->p_y))
	{
		mlx_pixel_put(grp->mlx, grp->win, ln->px, ln->py, node1->color);
		ln->err2 = ln->err;
		if (ln->err > -ln->dx)
		{
			ln->err = ln->err - ln->dy;
			ln->px = ln->px + ln->sx;
		}
		if (ln->err2 < ln->dy)
		{
			ln->err = ln->err + ln->dx;
			ln->py = ln->py + ln->sy;
		}
	}
}
