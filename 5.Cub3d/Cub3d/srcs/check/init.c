/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <loamar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 20:11:09 by loamar            #+#    #+#             */
/*   Updated: 2020/01/17 13:34:39 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"


t_map   *malloc_map(t_map *map)
{
	map = (t_map*)malloc(sizeof(t_map));
	if (map == NULL)
		return (NULL);
	return (map);
}

t_application   *malloc_application(t_application *application)
{
    application = (t_application*)malloc(sizeof(t_application));
    if (application == NULL)
    return (NULL);
    return (application);
}
