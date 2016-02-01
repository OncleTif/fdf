/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_draw.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 17:18:27 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/01 17:23:51 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_move_draw(int key, void *obj)
{
	t_graph	*graph;

	graph = (t_graph*)obj;
	if (key == 123)
		graph->x_offset = graph->x_offset - 5;
	else if (key == 124)
		graph->x_offset = graph->x_offset + 5;
	else if (key == 125)
		graph->y_offset = graph->y_offset + 5;
	else if (key == 126)
		graph->y_offset = graph->y_offset - 5;
	ft_draw(graph);
}
