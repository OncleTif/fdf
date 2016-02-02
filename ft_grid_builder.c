/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_builder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 14:48:04 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 17:50:53 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_grid	*ft_grid_builder(t_list *lst)
{
	t_grid	*grid;
	t_list	*elem;
	int		i;

	i = 0;
	if (!(grid = (t_grid*)ft_memalloc(sizeof(t_grid))))
		ft_error("grid allocation failed");
	elem = lst;
	while (elem)
	{
		grid->y_max++;
		elem = elem->next;
	}
	if (!(grid->map = (int**)ft_memalloc(sizeof(int*) * grid->y_max)))
		ft_error("map allocation failed");
	while (i < grid->y_max)
	{
		grid->map[i] = ft_line_to_i((char*)lst->content, grid);
		lst = lst->next;
		i++;
	}
	grid->x_mid = grid->x_max / 2;
	grid->y_mid = grid->y_max / 2;
	return (grid);
}
