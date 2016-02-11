/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_origin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 17:36:31 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 18:00:14 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_origin(t_graph *grp)
{
	grp->x_offset = WIDTH / 2;
	grp->y_offset = HEIGHT / 2;
	grp->zoom = 20;
	grp->anglexy = ANGLEXY;
	grp->anglexz = ANGLEXZ;
	grp->angleyz = ANGLEYZ;
	ft_draw(grp);
}
