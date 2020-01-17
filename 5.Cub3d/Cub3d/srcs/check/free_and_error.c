/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <loamar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 23:40:36 by loamar            #+#    #+#             */
/*   Updated: 2020/01/14 16:08:26 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

// void destroy_application(t_application to_destroy)
// {
// 	mlx_destroy_image(to_destroy.mlx_ptr, to_destroy.img_ptr);
// 	mlx_destroy_window(to_destroy.mlx_ptr, to_destroy.win_ptr);
// }
//
// void free_application(t_application *to_free)
// {
// 	destroy_application(*to_free);
// 	free(to_free);
// }

int		ft_error_cub(t_application *cub3d, char *msg)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(msg, 2);
	if (cub3d)
	{
		free(cub3d);
		//cub3d = NULL;
	}
	//exit(EXIT_FAILURE);
	return (0);
}
int		ft_error_map(t_map *map, char *msg)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(msg, 2);
	if (map)
	{
		free(map);
		//map = NULL;
	}
	//exit(EXIT_FAILURE);
	return (0);
}

int		Error_msg(void)
{
	ft_putstr_fd("Error with Parsing", 2);
	exit(EXIT_FAILURE);
	return (0);
}
