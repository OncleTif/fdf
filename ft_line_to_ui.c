/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_to_ui.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 14:59:53 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 15:40:07 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

unsigned int	*ft_line_to_ui(char *line, t_grid *grid)
{
	unsigned int	*tab;
	char			**words;
	int				i;

	i = 0;
	words = ft_strsplit(line, ' ');
	if (!grid->x_max)
		while (words[grid->x_max])
			grid->x_max++;
	tab = (unsigned int*)ft_memalloc(sizeof(unsigned int) * grid->x_max);
	while (i < grid->x_max)
	{
		tab[i] = ft_atoui_base(words[i]);
		i++;
	}
	return (tab);
}
