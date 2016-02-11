/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_text.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 18:16:25 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/11 18:24:43 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_text(t_graph *grp)
{
	char	*txt;

	txt = ft_strjoin("Zoom : ", ft_itoa(grp->zoom));
	mlx_string_put(grp->mlx, grp->win, 0, 0, 0x00FFFFFF, txt);
}
