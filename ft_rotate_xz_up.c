/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_xz_up.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 12:25:33 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 12:25:35 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_rotate_xz_up(t_graph *grp)
{
	grp->anglexz = grp->anglexz + 5;
	ft_putstr("new xz angle : ");
	ft_putnbrendl(grp->anglexz);
	ft_draw(grp);
}
