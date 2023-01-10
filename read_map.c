/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterrett <joterrett@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:50:30 by joterret          #+#    #+#             */
/*   Updated: 2023/01/10 03:11:13 by joterrett        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
/*
void    read_map(t_solong *solong, int fd)
    t_solong solong;
	char *line;
	int i;
	int j;

	line = "";
	solong.map.size_map_y = 0;
	solong.map.size_map_x = 0;

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

    */