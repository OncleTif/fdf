/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 12:00:23 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/02 18:32:29 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <fcntl.h>
# include "libft/libft.h"
# define HEIGHT 500
# define WIDTH 500

typedef	struct	s_keymap
{
	int				key;
	void			(*f)(int, void*);
	struct s_keymap	*next;
}				t_keymap;

typedef struct	s_grid
{
	int				**map;
	int				x_max;
	int				y_max;
	int				x_mid;
	int				y_mid;
}				t_grid;

typedef struct	s_graph
{
	int			width;
	int			zoom;
	int			height;
	int			x_offset;
	int			y_offset;
	t_grid		*grid;
	void		*mlx;
	void		*win;
}				t_graph;

t_list			*ft_reader(char *str);
void			make_window(t_grid *grid);
void			ft_draw(t_graph *graph);
void			ft_zoom_in(t_graph *graph);
void			ft_zoom_out(t_graph *graph);
void			ft_print_key(int key);
int				ft_get_key(int key, void *obj);
void			ft_move_draw(int key, void *obj);
int				*ft_line_to_i(char *line, t_grid *grid);
t_grid			*ft_grid_builder(t_list *lst);
void			ft_grid_printer(t_grid *grid);
#endif
