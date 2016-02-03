/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_builder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 12:38:19 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/03 12:45:27 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node	*ft_map_builder(t_list *lst)
{
	t_node	*org;
	t_node	*node;
	t_node	*lst_ln;

	lst_ln = NULL;
	while (lst)
	{
		node = ft_line_to_nodes((char*)lst->content, lst_ln);
		if (lst_ln)
			lst_ln->dwn = node;
		else
			org = node;
		lst_ln = node;
		lst = lst->next;
	}
	return (org);
}
