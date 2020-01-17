/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <loamar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 20:57:56 by loamar            #+#    #+#             */
/*   Updated: 2020/01/17 13:51:12 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}



// int		fill_map(t_map *map)
// {
// 	map->map = ft_split
// }

// int		parsing_cub3d(int argc, char **argv, t_map *map)
// {

// 	if (parsing_map(map, argc, argv) == 0)
//  		return (ft_error_cub(map, "[parsing_cub3d]error map.\n"));
// }


// static int		get_args(int argc, char **argv, t_map *map)
// {
// 	int		fd;
// 	char	*line;
// 	int		ret;
// 	int 	pos;

// 	pos = 0;
// 	if (argc == 0 || argc > 3)
// 		return (ft_error_cub(NULL, "wrong number of argc.\n"));
// 	if (!str_end_check(argv[1], ".cub") || (str_end_check(argv[1], ".cub") == NULL))
// 		return (ft_error_cub(NULL, "wrong file extension.\n"));
// 	if (!(fd = open(argv[1], O_RDONLY)))
// 		return (ft_error_cub(NULL, "wrong fd.\n"));
// 	printf("\n[fd = %d]\n", fd);
// 	line = NULL;
// 	ret = 1;
// 	while (ret)
// 	{
// 		ret = get_next_line(fd, &line);
// 		printf("\n[ret = %d]\n", ret);
// 		if (ret == 0)
// 			pos = 0;
// 		// if (ret < 0)
// 		if (ret < 0 || parsing_map(line, map, pos) == 0)
// 			return (ft_error_cub(NULL, "error while reading .cub\n"));
// 		pos += ret;
// 		ft_strdel(&line);
// 	}
// 	close(fd);
// 	return (1);
// }

// static int		get_args(int argc, char **argv, t_map *map)
// {
// 	int		fd;
// 	char	*line;
// 	int		ret;
// 	int 	pos;

// 	pos = 0;
// 	if (argc == 0 || argc > 3)
// 		return (ft_error_cub(NULL, "wrong number of argc.\n"));
// 	if (!str_end_check(argv[1], ".cub") || (str_end_check(argv[1], ".cub") == NULL))
// 		return (ft_error_cub(NULL, "wrong file extension.\n"));
// 	if (!(fd = open(argv[1], O_RDONLY)))
// 		return (ft_error_cub(NULL, "wrong fd.\n"));
// 	printf("\n[fd = %d]\n", fd);
// 	line = NULL;
// 	ret = 1;
// 	while (ret)
// 	{
// 		ret = get_next_line(fd, &line);
// 		printf("\n[ret = %d]\n", ret);
// 		if (ret == 0)
// 			pos = 0;
// 		// if (ret < 0)
// 		if (ret < 0 || parsing_map(line, map, pos) == 0)
// 			return (ft_error_cub(NULL, "error while reading .cub\n"));
// 		pos += ret;
// 		ft_strdel(&line);
// 	}
// 	close(fd);
// 	return (1);
// }

char 	*get_cub_string(int argc, char **argv)
{
	int				fd;
	char			buff[BUFFER_SIZE + 1];
	char			*tmp;
	char			*str;
	int				ret;

	str = ft_strdup("\0");
	if (!(fd = open(argv[1], O_RDONLY)))
 		return (NULL);
	while ((ret = read(fd, buff, BUFFER_SIZE)))
	{
		printf("---\nbefore str = \n%s\n---\n", str);
		buff[ret] = '\0';
		tmp = str;
		printf("---\nafter tmp = \n%s\n---\n", tmp);
		str = ft_strjoin(str, buff);
		printf("---\nafter str = \n%s\n---\n", str);
		free(tmp);
	}
	return (str);
}

static int		fill_map(t_map *map, char c, char *str_cub)
{
	int		index;
	int		index2;
	int		size;
	int		fill;

	fill = 0;
	index = 0;
	size = 0;
	while (str_cub[index] != '\n')
	{
		while (str_cub[index] != ' ')
		{
			if (c == 'R' && str_cub[index + 1] == ' ')
			{
				if (!(map->resolution_x = (char*)malloc(sizeof(char) * (size + 1))))
					return (ft_error_map(map, "[fill_map]error malloc.\n"));
				size = index - size;
				while (str_cub[size] != ' ')
				{
					map->resolution_x[index2] = str_cub[size];
					index2++;
					size++;
				}
				index++;
				size = 0;
			}
			if (str_cub[index + 1] == '\n' && (c == 'S' || c == 'F' || c == 'C'))
			{
				if (!(map->resolution_x = (char*)malloc(sizeof(char) * (size + 1))))
					return (ft_error_map(map, "[fill_map]error malloc.\n"));
				size = index - size;
				while (str_cub[size] != ' ')
				{
					map->resolution_x[index2] = str_cub[size];
					index2++;
					size++;
				}
			}
			size++;
			index++;
		}
		index++;
	}
	return (index);
}

static int		fill_map2(t_map *map, char c1, char c2, char *str_cub)
{
	int		index;
	int		index2;
	int		size;
	int		fill;

	fill = 0;
	index = 0;
	size = 0;
	while (str_cub[index] != '\n')
	{
		while (str_cub[index] != ' ')
		{
			if ((str_cub[index + 1] == '\n' && (c1 == 'N' && c2 == 'O')) \
			|| (c1 == 'S' && c2 == 'O') || (c1 == 'W' && c2 == 'E') || (c1 == 'E' && c2 == 'A'))
			{
				if (!(map->resolution_x = (char*)malloc(sizeof(char) * (size + 1))))
					return (ft_error_map(map, "[fill_map2]error malloc.\n"));
				size = index - size;
				while (str_cub[size] != ' ')
				{
					map->resolution_x[index2] = str_cub[size];
					index2++;
					size++;
				}
			}
			size++;
			index++;
		}
		index++;
	}
	return (index);
}

// initilasier t_map

int 	parsing_cub3d(int argc, char **argv, t_map *map)
{
	char 	*str_cub;
	int		index;

	index = 0;
	str_cub = get_cub_string(argc, argv);
	printf("============\nstr_cub = \n%s\n", str_cub);
	// if (!(str_cub = get_cub_string(argc, argv)))
		// return (ft_error_map(map, "[parsing_cub3d/str_cub] Error Read.\n"));
	if (argc == 0 || argc > 3)
		return (ft_error_map(NULL, "wrong number of argc.\n"));
	if (!str_end_check(argv[1], ".cub") || (str_end_check(argv[1], ".cub") == NULL))
		return (ft_error_map(NULL, "wrong file extension.\n"));
	while (*str_cub != '\0')
	{
		if ((*str_cub == 'R') \
			|| (*str_cub == 'S') \
			|| (*str_cub == 'F') \
			|| (*str_cub == 'C'))
			(*str_cub) += fill_map(map, index, str_cub);
		if ((*str_cub == 'N' && *(str_cub + 1) == 'O') \
			|| (*(str_cub + 1) == 'S' && *(str_cub + 1) == 'O') \
			|| (*(str_cub + 1) == 'W' && *(str_cub + 1) == 'E') \
			|| (*(str_cub + 1) == 'E' && *(str_cub + 1) == 'A'))
			(*str_cub) += fill_map2(map, *str_cub, *(str_cub + 1), str_cub);
		if (parsing_map(map, str_cub) == 0)
			return (ft_error_map(map, "[parsing_cub3d]error map.\n"));
		else
		 	break;
		(*str_cub)++;
	}
	// free (str_cub);
	str_cub = NULL;
	return (1);
}
