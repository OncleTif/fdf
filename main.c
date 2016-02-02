/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 11:57:48 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 17:28:13 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	t_list	*list;
	t_grid	*grid;

	grid = NULL;
	if (argc > 1 && argv)
	{
		list = ft_reader(argv[1]);
		grid = ft_grid_builder(list);
		ft_grid_printer(grid);
	}
	ft_putendl("av ouverture fenetre");
	make_window(grid);
	ft_error("not enough args");
	return(0);
}
