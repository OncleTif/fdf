/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_origin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 17:36:31 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/11 14:23:53 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_origin(t_graph *grp)
{
	grp->x_offset = WIDTH / 2;
	grp->y_offset = HEIGHT / 2;
	grp->zoom = 20;
	ft_draw(grp);
}
