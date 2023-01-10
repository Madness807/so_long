/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moove_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterrett <joterrett@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:22:29 by joterret          #+#    #+#             */
/*   Updated: 2023/01/10 04:36:27 by joterrett        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "so_long.h"

int	handle_key_event(int code, t_solong *solong)
{
		if (code == KEY_UP)
			moove_up(solong);
		if (code == KEY_DOWN)
			moove_down(solong);
		if (code == KEY_RIGHT)
			moove_right(solong);
		if (code == KEY_LEFT)
			moove_left(solong);
		if (code == KEY_CLOSE_WINDOW)
			mlx_destroy_window(solong->mlx.mlx_ptr, solong->mlx.win_ptr);
	
	return (0);
}

void	moove_up(t_solong *solong)
{
	int ppx = solong->map.pos_player_x;
	int ppy = solong->map.pos_player_y;

	if (solong->map.tab_map[ppy - 1][ppx] != '1')
	{
		put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, PLAYER, (ppy - 1) * SIZE, (ppx) * SIZE);
		put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, FLOOR, ppy * SIZE, ppx * SIZE);
		solong->map.pos_player_y = ppy -1;
	}
	return;
}

void	moove_down(t_solong *solong)
{
	int ppx = solong->map.pos_player_x;
	int ppy = solong->map.pos_player_y;

	if (solong->map.tab_map[ppy + 1][ppx] != '1')
	{
		put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, PLAYER, (ppy + 1) * SIZE, (ppx) * SIZE);
		put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, FLOOR, ppy * SIZE, ppx * SIZE);
		solong->map.pos_player_y = ppy +1;
	}
	return;
}

void	moove_left(t_solong *solong)
{
	int ppx = solong->map.pos_player_x;
	int ppy = solong->map.pos_player_y;

	if (solong->map.tab_map[ppy][ppx - 1] != '1')
	{
		put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, PLAYER, ppy * SIZE, (ppx - 1) * SIZE);
		put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, FLOOR, ppy * SIZE, ppx * SIZE);
		solong->map.pos_player_x = ppx -1;
	}
	return;
}

void	moove_right(t_solong *solong)
{	
	int ppx = solong->map.pos_player_x;
	int ppy = solong->map.pos_player_y;

	if (solong->map.tab_map[ppy][ppx + 1] != '1')
	{
		put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, PLAYER, ppy * SIZE, (ppx + 1) * SIZE);
		put_sprite(solong->mlx.mlx_ptr, solong->mlx.win_ptr, FLOOR, ppy * SIZE, ppx * SIZE);
		solong->map.pos_player_x = ppx +1;
	}
	return;
}


