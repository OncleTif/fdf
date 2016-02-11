/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zoom_opti.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 14:32:53 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/11 17:16:24 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_zoom_opti(t_graph *grp)
{
	int	zoom_x;
	int	zoom_y;
	int	z_extreme;

	zoom_x = grp->width / ((grp->x_max + grp->y_max) * sqrt(2));
	z_extreme = grp->z_max - grp->z_min;
	if (!z_extreme)
		z_extreme = 1;
	zoom_y = abs((int)(grp->height / ((sqrt(2) * z_extreme / sqrt(3)) -
					(grp->x_max + grp->y_max) / sqrt(6))));
	grp->zoom_opti = zoom_x < zoom_y ? zoom_x * 9 / 10 : zoom_y * 9 / 10;
	grp->zoom_step = grp->zoom_opti / 9;
	if (!grp->zoom_opti)
	{
		grp->zoom_step = 1;
		grp->zoom_opti = 1;
	}
	grp->zoom = grp->zoom_opti;
}
