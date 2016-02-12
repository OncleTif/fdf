/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_opti.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:26:31 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/12 12:30:34 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_size_opti(t_graph *grp)
{
	if (grp->x_max > 60 || grp->y_max > 60)
	{
		grp->width = WIDTH * 2;
		grp->height = HEIGHT * 2;
	}
	else
	{
		grp->width = WIDTH;
		grp->height = HEIGHT;
	}
}
