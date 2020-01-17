/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <loamar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 23:43:14 by loamar            #+#    #+#             */
/*   Updated: 2020/01/17 13:32:33 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "../lib/libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include "mlx.h"
# include <fcntl.h>
# include <stdio.h>
# include <limits.h>

/*
** GET_NEXT_LINE
*/

#include "../lib/gnl/get_next_line.h"



/*
** APPLICATION
 */

typedef struct	s_application
{
	int 		size_x;
	int 		size_y;
	char 		*title;

	void 		*mlx_ptr;
	void 		*win_ptr;
	void 		*img_ptr;

	int 		bits_per_pixels;
	int 		size_line;
	int 		endian;
	char		*pixels;
}				t_application;

int				ft_error(t_application *cub3d, char *msg);
char			*str_end_check(char *str, char *end);
t_application	create_application(int p_x, int p_y, char *p_title);
// t_application	*malloc_application(int p_x, int p_y, char *p_title);
void 			destroy_application(t_application to_destroy);
void 			free_application(t_application *to_free);
int 			run_application(t_application *application);
//void 			clear_application(t_image *application, t_color background);
void 			render_application(t_application *application);
//void 			put_pixel(t_image *application, int x, int y, t_color color);

/*
** MAP
 */

typedef struct s_map
{
	char	*resolution_x;
	char	*resolution_y;
	char	*north_texture;
	char	*south_texture;
	char	*west_texture;
	char	*east_texture;
	char	*sprite_texture;
	char	*ceiling_color;
	char	*floor_color;
	char	**map;
}				t_map;

t_map   		*init_map(t_map *map);
int				Error_msg(void);
int				ft_error_map(t_map *map, char *msg);
int				ft_error_cub(t_application *cub3d, char *msg);
int 			parsing_cub3d(int argc, char **argv, t_map *map);
int     		parsing_map(t_map *map, char *str_cub);
char			*str_end_check(char *str, char *end);
int 			ft_ispos(char c);
int 		    check_argc(int argc, char **argv);
//int				get_args(int argc, char **argv);
void			ft_strdel(char **as);

/*
** INIT STRUCT
*/

t_map   		*malloc_map(t_map *map);
t_application   *malloc_application(t_application *application);


#endif
