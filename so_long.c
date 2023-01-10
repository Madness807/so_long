/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:53:52 by joterret          #+#    #+#             */
/*   Updated: 2023/01/10 16:05:48 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	char		*line;
	int			fd;
	int			i;
	int			j;
	t_slg	slg;
	
	line = "";
	slg.size_map_y = 0;
	slg.size_map_x = 0;
	slg.nbr_pas = 0;
	fd = open(argv[1], O_RDONLY);
	while (line)
	{	
		line = get_next_line(fd);
		slg.size_map_y++;
	}
	slg.tab_map = malloc((slg.size_map_y) * sizeof(char *));
	close(fd);
	i = 0;
	open(argv[1], O_RDONLY);
	while (i < slg.size_map_y -1)
	{		
		slg.tab_map[i] = get_next_line(fd);
		i++;
	}
	close (fd);
	slg.size_map_x = (int)ft_strlen(slg.tab_map[i - 1]);
	i = 0;
	j = 0;
	slg.mlx_p = mlx_init();
	slg.win_p = mlx_new_window(slg.mlx_p, slg.size_map_x * SIZE, (slg.size_map_y - 1 )* SIZE, "Ma fenetre");
	while (i < slg.size_map_y - 1)
	{	
		j = 0;
		while (j < slg.size_map_x)
		{
			if (slg.tab_map[i][j] == '0' || slg.tab_map[i][j] == 'E')
				put_img(slg.mlx_p, slg.win_p, FLOOR, i * SIZE, j * SIZE);
			if (slg.tab_map[i][j] == '1')
			{
				put_img(slg.mlx_p, slg.win_p, FLOOR, i * SIZE, j * SIZE);
				put_img(slg.mlx_p, slg.win_p, WALL_UP, i * SIZE, j * SIZE);
			}
			if (slg.tab_map[i][j] == 'P')
			{
				put_img(slg.mlx_p, slg.win_p, FLOOR, i * SIZE, j * SIZE);
				put_img(slg.mlx_p, slg.win_p, PLAYER, i * SIZE, j * SIZE);
				slg.pos_player_x = j;
				slg.pos_player_y = i;
			}
			if (slg.tab_map[i][j] == 'C')
			{
				put_img(slg.mlx_p, slg.win_p, FLOOR, i * SIZE, j * SIZE);
				put_img(slg.mlx_p, slg.win_p, ITEM, i * SIZE, j * SIZE);
			}
			j++;
		}
		i++;
	}
	mlx_key_hook(slg.win_p, handle_key_event, &slg);
	mlx_loop(slg.mlx_p);
	return (0);
}
