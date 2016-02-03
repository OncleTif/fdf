/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 12:00:23 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/03 17:33:35 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <fcntl.h>
# include "libft/libft.h"
# define HEIGHT 500
# define WIDTH 500

typedef struct	s_node
{
	int				x;
	int				y;
	int				z;
	int				color;
	int				p_x;
	int				p_y;
	struct s_node	*up;
	struct s_node	*dwn;
	struct s_node	*lft;
	struct s_node	*rgt;
}				t_node;

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
	t_node		*node;
	void		*mlx;
	void		*win;
	int				x_max;
	int				y_max;
	int				x_mid;
	int				y_mid;
}				t_graph;

t_list			*ft_reader(char *str);
void			make_window(t_grid *grid, t_list *list);
void			ft_draw(t_graph *graph);
void			ft_zoom_in(t_graph *graph);
void			ft_zoom_out(t_graph *graph);
void			ft_print_key(int key);
int				ft_get_key(int key, void *obj);
void			ft_move_draw(int key, void *obj);
int				*ft_line_to_i(char *line, t_grid *grid);
t_grid			*ft_grid_builder(t_list *lst);
void			ft_grid_printer(t_grid *grid);
void			ft_map_builder(t_list *lst, t_graph *grp);
void			ft_map_relative(t_graph *grp);
void			ft_draw_line(t_node *node1, t_node *node2, t_graph *grp);
t_node			*ft_line_to_nodes(char **lst, t_node *lst_ln, t_graph *grp);
t_node			*ft_newnode(int x, int y, int z);
#endif
