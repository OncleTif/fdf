/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 12:00:23 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/01 17:22:52 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <fcntl.h>
# include "libft/libft.h"
# define HEIGHT 500
# define WIDTH 500

typedef struct	s_graph
{
	int			width;
	int			height;
	int			x_offset;
	int			y_offset;
	void		*mlx;
	void		*win;
}				t_graph;

int		ft_reader(char *str);
void	make_window(void);
void	ft_draw(t_graph *graph);
void	ft_print_key(int key);
int		ft_get_key(int key, void *obj);
void	ft_move_draw(int key, void *obj);
#endif
