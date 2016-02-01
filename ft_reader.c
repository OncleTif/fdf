/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:05:27 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/01 13:07:35 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_reader(char *str)
{
	int	fd;

	if ((fd = open(str, O_RDONLY)))
		while (get_next_line(fd, &str))
			ft_putstr(str);
	return (0);
}
