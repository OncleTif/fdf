/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:05:27 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 14:43:06 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_list	*ft_reader(char *file)
{
	int		fd;
	int		in_file;
	char	*str;
	t_list	*lst;

	lst = NULL;
	if ((fd = open(file, O_RDONLY)) > 0)
	{
		while ((in_file = get_next_line(fd, &str)) > 0 )
		{
			ft_lstpush_back(&lst, ft_lstnew(ft_strdup(str), sizeof(char*)));
			ft_putendl(str);
		}
		if (in_file == -1)
			ft_error("read error");
	}
	else
		ft_error("can't open file");
	return (lst);
}
