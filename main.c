/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 11:57:48 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/12 12:19:44 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	t_list	*list;

	if (argc == 2 && argv)
	{
		list = ft_reader(argv[1]);
		make_window(list);
	}
	ft_error("error in args");
	return (0);
}
