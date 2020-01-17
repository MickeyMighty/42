/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <loamar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 22:18:52 by loamar            #+#    #+#             */
/*   Updated: 2020/01/14 18:52:51 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

char	*str_end_check(char *str, char *end)
{
	int		index;
	int		index2;

	index = 0;
	index2 = 0;
	if (!str)
		str = NULL;
	while (str[index])
	{
		index++;
		while (str[index] == end[index2])
		{
			if (str[index] != end[index2])
				return (NULL);
			if (str[index] == '\0' && end[index2] == '\0')
				return (str);
			index++;
			index2++;
		}
	}
	return (NULL);
}

int 	ft_ispos(char c)
{
	if (c == 'N' || c == 'W' || c == 'E' || c == 'S')
		return (1);
	else
		return (0);
}
