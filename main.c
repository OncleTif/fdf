/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 11:57:48 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/04 15:43:45 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	t_list	*list;

	if (argc > 1 && argv)
	{
		list = ft_reader(argv[1]);
		make_window(list);
	}
	ft_error("not enough args");
	return (0);
}
