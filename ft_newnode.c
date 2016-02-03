/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 13:49:07 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/03 14:45:58 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node	*ft_newnode(int x, int y, int z)
{
	t_node	*node;

	if (!(node = (t_node*)ft_memalloc(sizeof(t_node))))
		ft_error("node allocation error");
	node->x = x;
	node->y = y;
	node->z = z;
	return (node);
}
