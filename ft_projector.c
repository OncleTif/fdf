/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_projector.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 11:42:21 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 15:08:43 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_projector(t_graph *grp, t_node *node)
{
	float	x_factor;
	float	y_factor;
	float	z_factor;

	x_factor = cos(grp->anglexy * M_PI / 180) * cos(grp->anglexz * M_PI / 180);
	y_factor = sin(grp->anglexy * M_PI / 180) * cos(grp->angleyz * M_PI / 180);
	z_factor = sin(grp->anglexz * M_PI / 180) * sin(grp->angleyz * M_PI / 180);
	node->p_x = (node->x * x_factor + node->y * y_factor - node->z * z_factor)
		* grp->zoom + grp->x_offset;
	node->p_y = (node->x * x_factor - node->z * z_factor - y_factor * node->y)
		* grp->zoom + grp->y_offset;
}
