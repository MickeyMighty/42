/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <loamar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 16:24:57 by loamar            #+#    #+#             */
/*   Updated: 2020/01/17 12:28:59 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

int     check_argc(int argc, char **argv)
{
    if (argc == 0 || argc > 3)
        return (ft_error(NULL, "wrong number of argc.\n"));
    if (!str_end_check(argv[1], ".cub"))
        return (ft_error(NULL, "wrong file extension.\n"));
    if (str_end_check(argv[1], ".cub") && str_end_check(argv[2], ".cub"))
        return (ft_error(NULL, "put only one map please"));
    return (1);
}
