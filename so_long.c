/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:53:52 by joterret          #+#    #+#             */
/*   Updated: 2023/01/03 17:21:07 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	void *mlx_ptr;
	void *win_ptr;
	char *line;
	t_map data;
	int fd;
	int i;
	int j;

	line = "";
	data.size_map_y = 0;
	data.size_map_x = 0;
	
	fd = open(argv[1], O_RDONLY);
	
	while (line)
	{	
		line = get_next_line(fd);
		data.size_map_y++;
	}
	data.tab_map = malloc(data.size_map_y * sizeof(char*));
	close(fd);
	
	
	i = 0;
	open(argv[1], O_RDONLY);
	while (i < data.size_map_y -1)
	{		
		data.tab_map[i] = get_next_line(fd);
		i++;
	}
	close (fd);
	
	data.size_map_x = (int)ft_strlen(data.tab_map[i - 1]);



	//NOTE - PARTIE GRAPHIQUE
	i = 0;
	j = 0;

	mlx_ptr = mlx_init();//NOTE - 
	win_ptr = mlx_new_window(mlx_ptr, data.size_map_x * SIZE, data.size_map_y * SIZE, "Ma fenetre");//NOTE - ouvre la fenetre a la bonne taille
	
	while (i < data.size_map_y - 1)
	{	
		while (j < data.size_map_x)
		{
			if (data.tab_map[i][j] == '0')
				put_sprite(mlx_ptr, win_ptr, FLOOR, i * SIZE, j * SIZE);
			if (data.tab_map[i][j] == '1')
				put_sprite(mlx_ptr, win_ptr, WALL_UP, i * SIZE, j * SIZE);
			j++;
		}
		i++;
	}
	mlx_loop(mlx_ptr);
	return (0);
}
