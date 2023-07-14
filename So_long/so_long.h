/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:40:13 by mdora             #+#    #+#             */
/*   Updated: 2023/07/08 09:45:44 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./printf/ft_printf.h"
# include "./libft/libft.h"
# include "./gnl/get_next_line.h"
# include "./minilibx/mlx.h"
# include <fcntl.h>
# include <unistd.h>

typedef struct l_index
{
	int	i;
	int	j;
	int	k;
}	t_index;

typedef struct l_start
{
	int		map_height;
	int		map_width;
	int		collectables;
	int		read_count;
	int		counter;
	int		y_axis;
	int		x_axis;

	char	**map;
	char	*maplocation;

	void	*mlxpointer;
	void	*winpointer;
	void	*floor;
	void	*barrier;
	void	*player;
	void	*exit;
	void	*collectable;
	t_index	index;
}	t_game;

int		exit_point(t_game *data);
int		controls_working(int command, t_game *data);

void	err_msg(char *err);
void	ber_control(char *map_name);
void	wall_control(t_game *data);
void	map_control(char *map_name, t_game *data);
void	map_reading(t_game *data);
void	tmp_control(char *map_name);
void	map_processing(t_game *data);
void	images_in_game(t_game *data);
void	placeholder(t_game *data, int x, int y);
void	place_collectable(t_game *data, int height, int width);
void	place_player(t_game *data, int height, int width);
void	adding_in_graphics(t_game *data);
void	map_bug(t_game *data);

#endif
