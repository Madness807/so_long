/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:53:57 by joterret          #+#    #+#             */
/*   Updated: 2022/12/29 15:15:44 by joterret         ###   ########.fr       */
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

// MAP



// JOUEUR



#endif