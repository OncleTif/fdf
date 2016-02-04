/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keymapnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 15:15:11 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 15:26:41 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_keymap	*ft_keymapnew(int key, t_keymap *nxt, void (*f)(t_graph*))
{
	t_keymap	*ret;

	if (!(ret = (t_keymap*)ft_memalloc(sizeof(t_keymap))))
		ft_error("keymap allocation error");
	ret->key = key;
	ret->f = f;
	ret->next = nxt;
	return (ret);
}
