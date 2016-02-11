/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_lister.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 17:27:51 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/11 14:19:30 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_keymap	*ft_key_mapping(void)
{
	t_keymap	*elem;

	elem = NULL;
	elem = ft_keymapnew(69, elem, &ft_zoom_in);
	elem = ft_keymapnew(78, elem, &ft_zoom_out);
	elem = ft_keymapnew(87, elem, &ft_origin);
	elem = ft_keymapnew(123, elem, &ft_move_lft);
	elem = ft_keymapnew(124, elem, &ft_move_rgt);
	elem = ft_keymapnew(125, elem, &ft_move_dwn);
	elem = ft_keymapnew(126, elem, &ft_move_up);
	return (elem);
}
