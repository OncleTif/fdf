/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 16:17:53 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 13:02:25 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_get_key(int key, void *obj)
{
	t_graph	*graph;

	graph = (t_graph*)obj;
	if (key == 53)
	{
		mlx_destroy_window(graph->mlx, graph->win);
		exit(0);
	}
	else if (key == 91)
		ft_rotate_xz_up(graph);
	else if (key == 84)
		ft_rotate_xz_dwn(graph);
	else if (key == 89)
		ft_rotate_yz_lft(graph);
	else if (key == 85)
		ft_rotate_yz_rgt(graph);
	else if (key == 86)
		ft_rotate_xy_lft(graph);
	else if (key == 88)
		ft_rotate_xy_rgt(graph);
	else if (key == 69)
		ft_zoom_in(graph);
	else if (key == 78)
		ft_zoom_out(graph);
	else if (key >= 123 && key <= 126)
		ft_move_draw(key, obj);
	else
		ft_print_key(key);
	return (0 * (int)obj);
}
