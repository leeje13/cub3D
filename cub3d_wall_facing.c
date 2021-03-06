/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_wall_facing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:38:50 by jelee             #+#    #+#             */
/*   Updated: 2020/10/02 00:15:43 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	c3d_wall_facing(t_param *cub3d)
{
	if (cub3d->ray.angle == 0 || cub3d->ray.angle == (2 * M_PI))
		cub3d->wall.facing = 'E';
	else if (cub3d->ray.angle == M_PI_2)
		cub3d->wall.facing = 'N';
	else if (cub3d->ray.angle == M_PI)
		cub3d->wall.facing = 'W';
	else if (cub3d->ray.angle == (3 * M_PI_2))
		cub3d->wall.facing = 'S';
	else if (cub3d->ray.angle < M_PI_2 && cub3d->ray.angle > 0)
		c3d_wall_facing_quadrant_1(cub3d);
	else if (cub3d->ray.angle < M_PI && cub3d->ray.angle > M_PI_2)
		c3d_wall_facing_quadrant_2(cub3d);
	else if (cub3d->ray.angle < (3 * M_PI_2) && cub3d->ray.angle > M_PI)
		c3d_wall_facing_quadrant_3(cub3d);
	else if (cub3d->ray.angle < (2 * M_PI) && cub3d->ray.angle > (3 * M_PI_2))
		c3d_wall_facing_quadrant_4(cub3d);
}

void	c3d_wall_facing_quadrant_1(t_param *cub3d)
{
	if (cub3d->wall.type == VERTICAL)
		cub3d->wall.facing = 'E';
	else if (cub3d->wall.type == HORIZONTAL)
		cub3d->wall.facing = 'N';
}

void	c3d_wall_facing_quadrant_2(t_param *cub3d)
{
	if (cub3d->wall.type == VERTICAL)
		cub3d->wall.facing = 'W';
	else if (cub3d->wall.type == HORIZONTAL)
		cub3d->wall.facing = 'N';
}

void	c3d_wall_facing_quadrant_3(t_param *cub3d)
{
	if (cub3d->wall.type == VERTICAL)
		cub3d->wall.facing = 'W';
	else if (cub3d->wall.type == HORIZONTAL)
		cub3d->wall.facing = 'S';
}

void	c3d_wall_facing_quadrant_4(t_param *cub3d)
{
	if (cub3d->wall.type == VERTICAL)
		cub3d->wall.facing = 'E';
	else if (cub3d->wall.type == HORIZONTAL)
		cub3d->wall.facing = 'S';
}
