/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_xy_rgt.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 12:18:32 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 12:22:59 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_rotate_xy_rgt(t_graph *grp)
{
	grp->anglexy = grp->anglexy + 5;
	ft_putstr("new xy angle : ");
	ft_putnbrendl(grp->anglexy);
	ft_draw(grp);
}
