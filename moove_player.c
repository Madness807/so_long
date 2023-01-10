/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moove_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:22:29 by joterret          #+#    #+#             */
/*   Updated: 2023/01/10 16:10:54 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "so_long.h"

int	handle_key_event(int code, t_slg *slg)
{
	if (code == KEY_UP)
		moove_up(slg);
	if (code == KEY_DOWN)
		moove_down(slg);
	if (code == KEY_RIGHT)
		moove_right(slg);
	if (code == KEY_LEFT)
		moove_left(slg);
	if (code == KEY_CLOSE_WINDOW)
		mlx_destroy_window(slg->mlx_p, slg->win_p);
	ft_printf("Nombre de mouvement %i\n", slg->nbr_pas);
	return (0);
}

void	moove_up(t_slg *slg)
{
	int		ppx;
	int		ppy;

	ppy = slg->pos_player_y;
	ppx = slg->pos_player_x;
	if (slg->tab_map[ppy - 1][ppx] != '1')
	{
		put_img(slg->mlx_p, slg->win_p, PLAYER, (ppy -1) * SIZE, ppx * SIZE);
		put_img(slg->mlx_p, slg->win_p, FLOOR, ppy * SIZE, ppx * SIZE);
		slg->pos_player_y = ppy -1;
		slg->nbr_pas = slg->nbr_pas + 1;
	}
	return ;
}

void	moove_down(t_slg *slg)
{
	int	ppx;
	int	ppy;

	ppx = slg->pos_player_x;
	ppy = slg->pos_player_y;
	if (slg->tab_map[ppy + 1][ppx] != '1')
	{
		put_img(slg->mlx_p, slg->win_p, PLAYER, (ppy +1) * SIZE, (ppx) * SIZE);
		put_img(slg->mlx_p, slg->win_p, FLOOR, ppy * SIZE, ppx * SIZE);
		slg->pos_player_y = ppy +1;
		slg->nbr_pas = slg->nbr_pas + 1;
	}
	return ;
}

void	moove_left(t_slg *slg)
{
	int	ppx;
	int	ppy;

	ppx = slg->pos_player_x;
	ppy = slg->pos_player_y;
	if (slg->tab_map[ppy][ppx - 1] != '1')
	{
		put_img(slg->mlx_p, slg->win_p, PLAYER, ppy * SIZE, (ppx - 1) * SIZE);
		put_img(slg->mlx_p, slg->win_p, FLOOR, ppy * SIZE, ppx * SIZE);
		slg->pos_player_x = ppx -1;
		slg->nbr_pas = slg->nbr_pas + 1;
	}
	return ;
}

void	moove_right(t_slg *slg)
{	
	int		ppx;
	int		ppy;

	ppx = slg->pos_player_x;
	ppy = slg->pos_player_y;
	if (slg->tab_map[ppy][ppx + 1] != '1')
	{
		put_img(slg->mlx_p, slg->win_p, PLAYER, ppy * SIZE, (ppx + 1) * SIZE);
		put_img(slg->mlx_p, slg->win_p, FLOOR, ppy * SIZE, ppx * SIZE);
		slg->pos_player_x = ppx +1;
		slg->nbr_pas = slg->nbr_pas + 1;
	}
	return ;
}
