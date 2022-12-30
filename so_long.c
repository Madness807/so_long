/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:53:52 by joterret          #+#    #+#             */
/*   Updated: 2022/12/29 17:36:04 by joterret         ###   ########.fr       */
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
		printf("Ligne du tableau = %s\n", data.tab_map[i]);//REVIEW - 
		i++;
	}
	close (fd);
	
	int x = 100;
	int y = 100;

	//NOTE - PARTIE GRAPHIQUE
	i = 0;
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 640, 480, "Ma fenetre");
	while (i < data.size_map_y - 1)
	{
		mlx_string_put(mlx_ptr, win_ptr, x, y, 0x1C6EA4, data.tab_map[i]);
		y++;
		i++;
	}
	mlx_loop(mlx_ptr);
	return (0);
}
