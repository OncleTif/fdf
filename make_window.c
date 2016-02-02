/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:15:12 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 17:36:22 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	make_window(t_grid *grid)
{
	t_graph	*graph;

	ft_putendl("debut de make win");
	grid = NULL;
	if(!(graph = (t_graph*)ft_memalloc(sizeof(t_graph))))
		ft_error("graph allocation failed");
	graph->width = WIDTH;
	graph->height = HEIGHT;
	ft_putendl("av affect grid");
	graph->grid = grid;
	ft_putendl("ap affect grid");
	graph->mlx = mlx_init();
	graph->win = mlx_new_window(graph->mlx, graph->width, graph->height, "FDF");
	ft_draw(graph);
	mlx_key_hook(graph->win, &ft_get_key, graph);
	mlx_loop(graph->mlx);
}
