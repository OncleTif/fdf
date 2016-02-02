/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_builder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 14:48:04 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 15:41:54 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_grid	*ft_grid_builder(t_list *lst)
{
	t_grid	*grid;
	t_list	*elem;
	int		i;

	i = 0;
	grid = (t_grid*)ft_memalloc(sizeof(t_grid));
	elem = lst;
	while (elem)
	{
		grid->y_max++;
		elem = elem->next;
	}
	grid->map = (unsigned int**)ft_memalloc(sizeof(int*) * grid->y_max);
	while (i < grid->y_max)
	{
		grid->map[i] = ft_line_to_ui((char*)lst->content, grid);
		lst = lst->next;
		i++;
	}
	return (grid);
}
