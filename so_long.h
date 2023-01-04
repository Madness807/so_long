/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:53:57 by joterret          #+#    #+#             */
/*   Updated: 2023/01/04 20:58:03 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

// LIBRAIRIE
#include "./libft/libft.h"
#include "./mlx/mlx.h"
#include <stdio.h>

// TOUCHE DE DEPLACEMENT
# define KEY_UP 	119
# define KEY_RIGHT	97
# define KEY_DOWN	115
# define KEY_LEFT	100

// Sprite
# define SIZE 32

# define FLOOR				"./sprites/floor.xpm"

# define WALL				"./sprites/wall.xpm"

# define WALL_UP			"./sprites/wall_up.xpm"
# define WALL_DOWN			"./sprites/wall_down.xpm"
# define WALL_RIGHT			"./sprites/wall_right.xpm"
# define WALL_LEFT			"./sprites/wall_left.xpm"
# define WALL_UP_LEFT		"./sprites/wall_up_left.xpm"
# define WAll_UP_RIGHT		"./sprites/wall_up_right.xpm"
# define WALL_DOWN_LEFT		"./sprites/wall_down_left.xpm"
# define WALL_DOWN_RIGHT	"./sprites/wall_down_right.xpm"

# define ITEM				"./sprites/item.xpm"
# define PLAYER 			"./sprites/player.xpm"

// STRUCTURES
typedef struct s_player
{
	int pos_player_x;
	int pos_player_y;
	
}t_player;

typedef struct s_map
{	
	int size_map_x;
	int size_map_y;
	char **tab_map;
	
}t_map;

typedef struct s_assets
{
	int pos_player_x;
	int pos_player_y;

	int pos_item_1;
	int pos_item_2;
	
	int pos_ennemy_1;
}t_assets;


// Utils
void	put_sprite(void *ptr_mlx, void *ptr_win, char *sprite_path, int i, int j);
void	exit_game(void);


#endif