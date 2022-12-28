/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:53:52 by joterret          #+#    #+#             */
/*   Updated: 2022/12/28 20:53:53 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	//void *mlx_ptr;
	//void *win_ptr;
	char *line;
	t_map data;
	int fd;

	fd = open(argv[1], O_RDONLY);
	
	//NOTE - Initialisation des variables
	line = "";
	data.size_map_y = 0;
	data.size_map_x = 0;
	
	//NOTE - Lecture de la map pour connaitre ca taille
	while (line)
	{	
		line = get_next_line(fd);
		data.size_map_x++;
		data.size_map_y++;
	}
	
	data.tab_map = malloc(data.size_map_y * sizeof(char*));
	while (i < data.size_map_x)
	{
		


	}

	//NOTE - Lecture de la map pour connaitre ca taille
	int i;

	i = 0;
	while (line)
	{
		line = get_next_line(fd);
		data.tab_map[i] = line;
		printf("ta map en string%s\n", data.tab_map[i]);
		i++;
	}
	
	//NOTE - FESTIVAL DU TEST
	printf("\n");
	printf("taille y = %d\n", data.size_map_y);
	printf("la map en str = %c\n", data.tab_map[0][3]);

	//NOTE - Partie graphique
	//mlx_ptr = mlx_init();
	//win_ptr = mlx_new_window(mlx_ptr, 640, 480, "Ma fenetre");

	//mlx_loop(mlx_ptr);
	return (0);
}
