/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_mouse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 17:05:38 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/12 17:40:14 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_get_mouse(int btn, int x, int y, void *obj)
{
	t_graph		*grp;
	t_keymap	*keymap;

	grp = (t_graph*)obj;
	keymap = grp->keymap;
	if (key == 53)
	{
		mlx_destroy_window(grp->mlx, grp->win);
		exit(0);
	}
	while (keymap && keymap->key != key)
		keymap = keymap->next;
	if (keymap)
		keymap->f(grp);
	else
		ft_print_key(key);
	return (0);
}
