/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:15:12 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/03 15:19:00 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	make_window(t_grid *grid, t_list *list)
{
	t_graph	*graph;

	if (!(graph = (t_graph*)ft_memalloc(sizeof(t_graph))))
		ft_error("graph allocation failed");
	graph->width = WIDTH;
	graph->height = HEIGHT;
	graph->x_offset = WIDTH / 2;
	graph->y_offset = HEIGHT / 2;
	graph->zoom = 20;
	ft_putendl("av grid affect");
	graph->grid = grid;
	ft_putendl("av map buider");
	//graph->node = ft_map_builder(list, graph);
	graph->mlx = mlx_init();
	graph->win = mlx_new_window(graph->mlx, graph->width, graph->height, "FDF");
	ft_draw(graph);
	mlx_key_hook(graph->win, &ft_get_key, graph);
	mlx_loop(graph->mlx);
	list = NULL;
}
