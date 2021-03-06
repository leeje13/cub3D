/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_map_file_is_xyz.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 13:40:56 by jelee             #+#    #+#             */
/*   Updated: 2020/10/04 16:40:58 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		c3d_map_file_is_resolution(char *line)
{
	if ((*line == 'R' && *(line + 1) == ' '))
		return (1);
	return (0);
}

int		c3d_map_file_is_texture(char *line)
{
	if ((*line == 'N' && *(line + 1) == 'O') ||
		(*line == 'S' && *(line + 1) == 'O') ||
		(*line == 'W' && *(line + 1) == 'E') ||
		(*line == 'E' && *(line + 1) == 'A') ||
		(*line == 'S' && *(line + 1) == ' '))
		return (1);
	return (0);
}

int		c3d_map_file_is_floor_or_ceiling(char *line)
{
	if ((*line == 'F' && *(line + 1) == ' ') ||
		(*line == 'C' && *(line + 1) == ' '))
		return (1);
	return (0);
}
