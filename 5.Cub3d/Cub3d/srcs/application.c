/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   application.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 18:12:03 by loamar            #+#    #+#             */
/*   Updated: 2020/01/09 20:38:31 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application.h"
#include "mlx.h"

t_application create_app(int p_x, int p_y, char *p_tittle)
{
	t_application ret;

	ret.size_x = p_x;
	ret.size_y = p_y;
	ret.title = p_tittle;

	ret.mlx_ptr = mx_init();
	ret.win_ptr = mlx_new_window(ret.mlx_ptr, ret.size_x, ret.size_y, ret.title);
	ret.img_ptr = mlx_new_image(ret.mlx_ptr, ret.size_x, ret.size_y);
	ret.pixels = mlx_get_data_addr(ret.img, 
}
