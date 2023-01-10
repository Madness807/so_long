/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterrett <joterrett@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:53:57 by joterret          #+#    #+#             */
/*   Updated: 2023/01/10 04:33:37 by joterrett        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

// LIBRAIRIE [✅]
#include "./libft/libft.h"
#include "./mlx/mlx.h"
#include <stdio.h>

// TOUCHE DE DEPLACEMENT [✅]
# define KEY_UP 			13
# define KEY_RIGHT			2
# define KEY_DOWN			1
# define KEY_LEFT			0
# define KEY_CLOSE_WINDOW 	53

// Sprite []
# define SIZE 				32
# define FLOOR				"./sprites/floor.xpm"
# define WALL				"./sprites/wall.xpm"
# define ITEM				"./sprites/item.xpm"
# define PLAYER 			"./sprites/player.xpm"

// Sprites Bonus []
# define WALL_UP			"./sprites/wall_up.xpm"
# define WALL_DOWN			"./sprites/wall_down.xpm"
# define WALL_RIGHT			"./sprites/wall_right.xpm"
# define WALL_LEFT			"./sprites/wall_left.xpm"
# define WALL_UP_LEFT		"./sprites/wall_up_left.xpm"
# define WAll_UP_RIGHT		"./sprites/wall_up_right.xpm"
# define WALL_DOWN_LEFT		"./sprites/wall_down_left.xpm"
# define WALL_DOWN_RIGHT	"./sprites/wall_down_right.xpm"


// STRUCTURES
typedef struct s_mlx
{
	void *mlx_ptr;
	void *win_ptr;
}t_mlx;

typedef struct s_map
{	
	int pos_player_x;
	int pos_player_y;
	
	int pos_item_1;
	int pos_ennemy_1;
	
	int size_map_x;
	int size_map_y;
	char **tab_map;
	
}t_map;

typedef struct s_solong
{
	t_mlx mlx;
	t_map map;
	
}t_solong;

// Utils
void	put_sprite(void *ptr_mlx, void *ptr_win, char *sprite_path, int i, int j);
void	exit_game(void);

// Utils Moove
void	moove_up(t_solong *solong);
void	moove_down(t_solong *solong);
void	moove_right(t_solong *solong);
void	moove_left(t_solong *solong);

// Gestion de evenement du clavier 
int	handle_key_event(int code, t_solong *solong);

#endif