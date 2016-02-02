/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_to_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 16:03:13 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 17:52:37 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	*ft_line_to_i(char *line, t_grid *grid)
{
	int		*tab;
	char	**words;
	int		i;

	i = 0;
	words = ft_strsplit(line, ' ');
	if (!grid->x_max)
		while (words[grid->x_max])
			grid->x_max++;
	if (!(tab = (int*)ft_memalloc(sizeof(int) * grid->x_max)))
		ft_error("map line allocation failed");
	while (i < grid->x_max)
	{
		tab[i] = ft_atoi(words[i]);
		i++;
	}
	return (tab);
}
