/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_sprite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:11:09 by joterret          #+#    #+#             */
/*   Updated: 2023/01/10 16:11:54 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_img(void *p_mlx, void *p_win, char *sprite_path, int i, int j)
{
	int		x;
	int		y;
	void	*img;

	x = 32;
	y = 32;
	img = mlx_xpm_file_to_image(p_mlx, sprite_path, &x, &y);
	mlx_put_image_to_window(p_mlx, p_win, img, j, i);
	return ;
}
