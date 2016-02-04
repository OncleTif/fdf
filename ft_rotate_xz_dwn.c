/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_xz_dwn.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 12:26:27 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 12:26:45 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_rotate_xz_dwn(t_graph *grp)
{
	grp->anglexz = grp->anglexz - 5;
	ft_putstr("new xz angle : ");
	ft_putnbrendl(grp->anglexz);
	ft_draw(grp);
}
