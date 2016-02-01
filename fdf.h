/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 12:00:23 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/01 16:31:41 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct	s_graph
{
void			*mlx;
void			*win;
}				t_graph;

int		ft_reader(char *str);
void	make_window(void);
void	ft_draw(t_graph *graph);
void	ft_print_key(int key);
int		ft_get_key(int key, void *obj);
#endif
