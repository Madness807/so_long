/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:53:57 by joterret          #+#    #+#             */
/*   Updated: 2022/12/27 18:54:00 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

//NOTE - Librairie
#include "./libft/libft.h"
#include "./mlx/mlx.h"
#include <stdio.h>

//NOTE - Touches de deplacement
# define KEY_UP 	119
# define KEY_RIGHT	97
# define KEY_DOWN	115
# define KEY_LEFT	100

//NOTE - Structures
typedef struct s_player
{
	int pos_player_x;
	int pos_player_y;
}t_player;

typedef struct s_map
{
	int fd_map;
	int tab_map_x;
	int tab_map_y;
	char **tab;
}t_map;

//NOTE - Fonction principal


//NOTE - Fonction utils

int		check_tab_size()

//NOTE - Fonction de gestion graphique


#endif