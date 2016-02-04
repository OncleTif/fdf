/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_yz_rgt.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 13:04:21 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 13:09:44 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_rotate_yz_rgt(t_graph *grp)
{
	grp->angleyz = grp->angleyz + 5;
	ft_putstr("new yz angle : ");
	ft_putnbrendl(grp->angleyz);
	ft_draw(grp);
}
