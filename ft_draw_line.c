/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 16:37:05 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 11:23:58 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw_nothing(t_node *node1, t_node *node2, t_graph *grp)
{
	int	p_x;
	int	p_y;
	int	d_x;
	int	d_y;
	int err;

	p_x = node1->p_x;
	p_y = node1->p_y;
	d_x = abs(p_x - node2->p_x);
	d_y = abs(p_y - node2->p_y);
	err = (d_x > d_y ? d_x : d_y) / 2;
	while (p_x != node2->p_x || p_y != node2->p_y)
	{
		mlx_pixel_put(grp->mlx, grp->win, p_x, p_y, node1->color);
		if (err > -d_x && err < d_y)
		{
			err = err - d_y + d_x;
			p_x = p_x + (p_x - node2->p_x / abs(p_x - node2->p_x));
			p_y = p_y + (p_y - node2->p_y / abs(p_y - node2->p_y));
		}
		else if (err > -d_x)
		{
			err = err + d_x;
			p_x = p_x + (p_x - node2->p_x / abs(p_x - node2->p_x));
		}
		else if (err < d_y)
		{
			err = err - d_y;
			p_y = p_y + (p_y - node2->p_y / abs(p_y - node2->p_y));
		}
	}
}



void	ft_draw_line(t_node *node1, t_node *node2, t_graph *grp)
{
	int	x0;
	int	y0;
	int	x1;
	int y1;
	x0 = node1->p_x;
	y0 = node1->p_y;
	x1 = node2->p_x;
	y1 = node2->p_y;
	int dx = abs(x1-x0), sx = x0<x1 ? 1 : -1;
	int dy = abs(y1-y0), sy = y0<y1 ? 1 : -1;
	int err = (dx>dy ? dx : -dy)/2, e2;

	for(;;){
		//setPixel(x0,y0);
		if (node1->color == node2->color)
			mlx_pixel_put(grp->mlx, grp->win, x0, y0, node1->color);
		else
			mlx_pixel_put(grp->mlx, grp->win, x0, y0, 0x00FFFFFF);
		if (x0==x1 && y0==y1) break;
		e2 = err;
		if (e2 >-dx) { err -= dy; x0 += sx; }
		if (e2 < dy) { err += dx; y0 += sy; }
	}
}
