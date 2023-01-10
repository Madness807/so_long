/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterrett <joterrett@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:53:52 by joterret          #+#    #+#             */
/*   Updated: 2023/01/10 05:21:13 by joterrett        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	t_solong solong;
	char *line;
	int fd;
	int i;
	int j;

	line = "";
	solong.map.size_map_y = 0;
	solong.map.size_map_x = 0;
	solong.map.nbr_pas = 0;

	fd = open(argv[1], O_RDONLY);
	
	while (line)
	{	
		line = get_next_line(fd);
		solong.map.size_map_y++;
	}
	
	solong.map.tab_map = malloc((solong.map.size_map_y) * sizeof(char*));
	close(fd);
	
	i = 0;
	open(argv[1], O_RDONLY);
	while (i < solong.map.size_map_y -1)
	{		
		solong.map.tab_map[i] = get_next_line(fd);
		i++;
	}
	close (fd);
	
	solong.map.size_map_x = (int)ft_strlen(solong.map.tab_map[i - 1]);

	//TODO - Verifier que la map et rectangle et jouable avec la fonction A *Schearch
	
	//NOTE - PARTIE GRAPHIQUE
	i = 0;
	j = 0;

	solong.mlx.mlx_ptr = mlx_init();
	solong.mlx.win_ptr = mlx_new_window(solong.mlx.mlx_ptr, solong.map.size_map_x * SIZE, (solong.map.size_map_y - 1 )* SIZE, "Ma fenetre");//NOTE - ouvre la fenetre a la bonne taille
	
	while (i < solong.map.size_map_y - 1)
	{	
		j = 0;
		while (j < solong.map.size_map_x)
		{
			if (solong.map.tab_map[i][j] == '0' || solong.map.tab_map[i][j] == 'E')
				put_sprite(solong.mlx.mlx_ptr, solong.mlx.win_ptr, FLOOR, i * SIZE, j * SIZE);
			if (solong.map.tab_map[i][j] == '1')
			{
				put_sprite(solong.mlx.mlx_ptr, solong.mlx.win_ptr, FLOOR, i * SIZE, j * SIZE);
				put_sprite(solong.mlx.mlx_ptr, solong.mlx.win_ptr, WALL_UP, i * SIZE, j * SIZE);
			}
			if (solong.map.tab_map[i][j] == 'P')
			{
				put_sprite(solong.mlx.mlx_ptr, solong.mlx.win_ptr, FLOOR, i * SIZE, j * SIZE);
				put_sprite(solong.mlx.mlx_ptr, solong.mlx.win_ptr, PLAYER, i * SIZE, j * SIZE);
				solong.map.pos_player_x = j;
				solong.map.pos_player_y = i;
			}
			if (solong.map.tab_map[i][j] == 'C')
			{
				put_sprite(solong.mlx.mlx_ptr, solong.mlx.win_ptr, FLOOR, i * SIZE, j * SIZE);
				put_sprite(solong.mlx.mlx_ptr, solong.mlx.win_ptr, ITEM, i * SIZE, j * SIZE);
			}
			j++;
		}
		i++;
	}

	mlx_key_hook(solong.mlx.win_ptr, handle_key_event, &solong);
	
	mlx_loop(solong.mlx.mlx_ptr);
	return (0);
}

