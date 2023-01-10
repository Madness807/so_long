/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moove_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:22:29 by joterret          #+#    #+#             */
/*   Updated: 2023/01/10 01:00:05 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "so_long.h"


void	moove_up(t_solong *solong)
{
	int ppx = solong->map.pos_player_x;
	int ppy = solong->map.pos_player_y;

	put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, PLAYER, (ppy - 1) * SIZE, (ppx) * SIZE);
	put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, FLOOR, ppy * SIZE, ppx * SIZE);
	solong->map.pos_player_y = ppy -1;
	return;
}

void	moove_down(t_solong *solong)
{
	int ppx = solong->map.pos_player_x;
	int ppy = solong->map.pos_player_y;

	put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, PLAYER, (ppy + 1) * SIZE, (ppx) * SIZE);
	put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, FLOOR, ppy * SIZE, ppx * SIZE);
	solong->map.pos_player_y = ppy +1;
	return;
}

void	moove_left(t_solong *solong)
{
	int ppx = solong->map.pos_player_x;
	int ppy = solong->map.pos_player_y;

	put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, PLAYER, ppy * SIZE, (ppx - 1) * SIZE);
	put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, FLOOR, ppy * SIZE, ppx * SIZE);
	solong->map.pos_player_x = ppx -1;
	return;
}

void	moove_right(t_solong *solong)
{	
	int ppx = solong->map.pos_player_x;
	int ppy = solong->map.pos_player_y;

	put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, PLAYER, ppy * SIZE, (ppx + 1) * SIZE);
	put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, FLOOR, ppy * SIZE, ppx * SIZE);
	solong->map.pos_player_x = ppx +1;
	return;
}
