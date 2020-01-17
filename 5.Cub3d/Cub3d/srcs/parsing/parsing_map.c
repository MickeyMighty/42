/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <loamar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 02:54:42 by loamar            #+#    #+#             */
/*   Updated: 2020/01/17 14:14:18 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

// faire le check de la map

int     parsing_map(t_map *map, char *str_cub)
{
    // if (!(str = ft_split(str_cub, '\n')))
    if (!(map->map = ft_split(str_cub, '\n')))
       return (ft_error_map(map, "[parsing_map]error split.\n"));
    // printf("ok \n");
    free (str_cub);
    return (1);
}
