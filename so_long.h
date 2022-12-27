/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:53:57 by joterret          #+#    #+#             */
/*   Updated: 2022/12/27 16:56:46 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

//NOTE - Librairie
#include "./libft/libft.h"
#include "./mlx/mlx.h"
#include <stdio.h>

//NOTE - Touches

# define key_up 	w
# define key_right	a
# define key_down	s
# define key_left	d

//NOTE - Structures
typedef struct player
{
	int pos_player_x;
	int pos_player_y;
}
typedef struct map
{
	int fd_map;
	int tab_map_x;
	int tab_map_y;
}

//NOTE - Fonction principal



//NOTE - Fonction utils


#endif