/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_builder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 12:38:19 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/03 15:56:37 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_map_builder(t_list *lst, t_graph *grp)
{
	t_node	*node;
	t_node	*lst_ln;
	char	**tab;

	lst_ln = NULL;
	while (lst)
	{
		tab = ft_strsplit((char*)lst->content, ' ');
		node = ft_line_to_nodes(tab, lst_ln, grp);
		if (lst_ln)
			lst_ln->dwn = node;
		else
			grp->node = node;
		lst_ln = node;
		lst = lst->next;
		grp->y_max++;
	}
	grp->x_mid = grp->x_max / 2;
	grp->y_mid = grp->y_max / 2;
	ft_map_relative(grp);
}
