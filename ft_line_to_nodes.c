/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_to_nodes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 12:42:16 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/03 16:09:43 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node	*ft_line_to_nodes(char **z, t_node *up, t_graph *grp)
{
	t_node	*org;
	t_node	*node;
	t_node	*lft;
	int		x;

	x = 0;
	org = NULL;
	lft = NULL;
	while (z[x] && (ft_isdigit(z[x][0]) || z[x][0] == '-'))
	{
		node = ft_newnode(x, grp->y_max, ft_atoi(z[x]));
		node->lft = lft;
		if (lft || !(org = node))
			lft->rgt = node;
		if (up && (up->dwn = node))
		{
			node->up = up;
			up = up->rgt;
		}
		lft = node;
		x++;
	}
	if (x > grp->x_max)
		grp->x_max = x;
	return (org);
}
