/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_projector_iso.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 13:49:21 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/11 14:14:28 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_projector_iso(t_graph *grp, t_node *node)
{
	node->p_x = grp->zoom * (node->x - node->y) * sqrt(2) / 2 + grp->x_offset;
	node->p_y = grp->zoom * ((sqrt(2) * -node->z / sqrt(3) -
				(node->x + node->y)  / sqrt(6))) + grp->y_offset;
}
