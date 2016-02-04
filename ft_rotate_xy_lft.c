/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_xy_lft.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 12:16:21 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 12:22:44 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_rotate_xy_lft(t_graph *grp)
{
	grp->anglexy = grp->anglexy - 5;
	ft_putstr("new xy angle : ");
	ft_putnbrendl(grp->anglexy);
	ft_draw(grp);
}
