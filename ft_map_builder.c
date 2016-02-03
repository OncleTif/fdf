/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_builder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 12:38:19 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/03 14:56:06 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node	*ft_map_builder(t_list *lst, t_graph *grp)
{
	t_node	*org;
	t_node	*node;
	t_node	*lst_ln;

	org = NULL;
	lst_ln = NULL;
	while (lst)
	{
		node = ft_line_to_nodes(ft_strsplit((char*)lst->content, ' '),
				lst_ln, grp);
		if (lst_ln)
			lst_ln->dwn = node;
		else
			org = node;
		lst_ln = node;
		lst = lst->next;
		grp->y_max++;
	}
	return (org);
}
