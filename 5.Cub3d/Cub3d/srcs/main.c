/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <loamar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 11:55:20 by loamar            #+#    #+#             */
/*   Updated: 2020/01/17 14:13:08 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"
// create window
//

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

/*
** Number of key :
** 126 = up (moving forward)
** 125 = down (retreat)
** 123 = left (go left)
** 124 = right (go right)
** 13 = w (moving forward)
** 0 = a (go left)
** 1 = s (retreat)
** 2 = d (go right)
** 53 = esc (exit)
*/

int		deal_key(int key, void *param)
{
	int		i;
	int		j;

	i = 1;
	j = 1;

	ft_putnbr(key);
	ft_putchar(' ');

/*	if (key == 126)
	{
		i++;
		mlx_pixel_put(mlx_ptr, win_ptr, i, j, 0xFFFFFF);
	}
	if (key == 125)
	{
		j++;
		mlx_pixel_put(mlx_ptr, win_ptr, i, j, 0xFFFFFF);
	}*/
	return (0);
}

int		main(int argc, char **argv)
{
	t_application		*app;
	t_map				*map;
	int 				i;
	int 				j;

	if (!(map = malloc_map(map)))
		return (ft_error_cub((NULL), "[main/malloc_map] Error.\n"));
	// *application = malloc_application(application);
	i = 0;
	j = 0;
	if (parsing_cub3d(argc, argv, map) == 0)
		return (ft_error_map(map, "error [main/parsing_cub3d]"));
		//return (Error_msg(void));
	//app->mlx_ptr = mlx_init();
	//app->win_ptr = mlx_new_window(app->mlx_ptr, 500 , 500, "mlx");
	//app->img_ptr = mlx_new_image(app->mlx_ptr, 500, 500);
	//mlx_pixel_put(app->mlx_ptr, app->win_ptr, 250, 250, 0xFFFFFF);
	//mlx_key_hook(app->win_ptr, deal_key, param);
	//mlx_loop(app->mlx_ptr);
	// mlx loop permet de recup les evenements
	printf("\n===================\n-------------------\n================\n");
	while (map->map[i] != NULL)
	{
		j = 0;
		while (map->map[i][j] != '\0')
		{
			ft_putchar(map->map[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}
