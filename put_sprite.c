/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_sprite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterrett <joterrett@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:11:09 by joterret          #+#    #+#             */
/*   Updated: 2023/01/10 05:06:29 by joterrett        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_sprite(void *ptr_mlx, void *ptr_win, char *sprite_path, int i, int j)
{
	int x = 32;
	int y = 32;
	void *img;
	
	img = mlx_xpm_file_to_image(ptr_mlx, sprite_path, &x, &y);
	mlx_put_image_to_window(ptr_mlx, ptr_win, img, j, i);
	return;
}