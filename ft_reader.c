/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:05:27 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 10:57:48 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_reader(char *file)
{
	int		fd;
	int		in_file;
	char	*str;

	if ((fd = open(file, O_RDONLY)) > 0)
	{
		while ((in_file = get_next_line(fd, &str)) > 0 )
			ft_putstr(str);
		if (in_file == -1)
			ft_error("read error");
	}
	else
		ft_error("can't open file");
	return (0);
}
