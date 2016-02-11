/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 13:49:07 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/11 17:19:08 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node	*ft_newnode(int x, int y, int z, t_graph *grp)
{
	t_node	*node;

	if (!(node = (t_node*)ft_memalloc(sizeof(t_node))))
		ft_error("node allocation error");
	node->x = x;
	node->y = y;
	node->z = z;
	if (z < grp->z_min)
		grp->z_min = z;
	else if (z > grp->z_max)
		grp->z_max = z;
	return (node);
}
