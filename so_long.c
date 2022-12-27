/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:53:52 by joterret          #+#    #+#             */
/*   Updated: 2022/12/27 17:26:12 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	
	void *mlx_ptr;
	void *win_ptr;
	int 

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 640, 480, "Ma fenetre");

	
	// TODO lire la map (le fichier ber) avec gnl 
	// TODO remplir le tableau a 2 dimmenssion map avec les data recuperer du retour de gnl
	

	mlx_loop(mlx_ptr);
	return (0);
}



