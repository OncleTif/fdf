/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 16:58:25 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 17:01:29 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_line_init(t_node *node1, t_node *node2, t_line *ln)
{
	ln->px = node1->p_x;
	ln->py = node1->p_y;
	ln->dx = abs(ln->px - node2->p_x);
	ln->dy = abs(ln->py - node2->p_y);
	ln->sx = node1->p_x < node2->p_x ? 1 : -1;
	ln->sy = node1->p_y < node2->p_y ? 1 : -1;
	ln->err = (ln->dx > ln->dy ? ln->dx : -ln->dy) / 2;
}
