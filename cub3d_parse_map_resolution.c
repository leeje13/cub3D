/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_parse_map_resolution.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:05:38 by jelee             #+#    #+#             */
/*   Updated: 2020/10/06 00:19:07 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	c3d_parse_map_resolution(char *line, t_param *cub3d)
{
	char *resolution;

	resolution = ft_strnew(0);
	while (!ft_isdigit(*line))
		++line;
	while (ft_isdigit(*line))
		ft_strappend_xo_chr(&resolution, *line++);
	cub3d->window.width = ft_atoi(resolution);
	*resolution = '\0';
	while (!ft_isdigit(*line))
		++line;
	while (ft_isdigit(*line))
		ft_strappend_xo_chr(&resolution, *line++);
	cub3d->window.height = ft_atoi(resolution);
	c3d_parse_map_resolution_validaiton(cub3d);
	free(resolution);
}

void	c3d_parse_map_resolution_validaiton(t_param *cub3d)
{
	int	screen_height;
	int	screen_width;
	int i;

	i = 0;
	mlx_get_screen_size(cub3d->mlx, &screen_width, &screen_height);
	if (cub3d->window.width > screen_width || cub3d->window.width == 0)
		if (++i)
			cub3d->window.width = screen_width;
	if (cub3d->window.height > screen_height || cub3d->window.height == 0)
		if (++i)
			cub3d->window.height = screen_height;
	if (i)
		perror("INVALID RESOLUTON - RESIZE TO FIT SCREEN");
}
