/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 16:17:53 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/01 17:37:16 by tmanet           ###   ########.fr       */
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
	else if (key >= 123 && key <= 126)
		ft_move_draw(key, obj);
	else
		ft_print_key(key);
	return (0 * (int)obj);
}
