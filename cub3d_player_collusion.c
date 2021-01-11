/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_player_collision.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:50:56 by jelee             #+#    #+#             */
/*   Updated: 2020/10/06 16:11:21 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	c3d_player_wall_collision(t_param *cub3d, int x, int y)
{
	if (cub3d->map.grid
	[(int)(y / cub3d->map.tile_size)]
	[(int)(x / cub3d->map.tile_size)] == 1)
		return (1);
	return (0);
}

int	c3d_player_sprite_collision(t_param *cub3d, int x, int y)
{
	if (cub3d->map.grid
	[(int)(y / cub3d->map.tile_size)]
	[(int)(x / cub3d->map.tile_size)] == 2)
		return (1);
	return (0);
}
