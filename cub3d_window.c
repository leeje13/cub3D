/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 02:47:22 by jelee             #+#    #+#             */
/*   Updated: 2020/10/07 13:48:00 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		c3d_window_refresh(t_param *cub3d)
{
	if (cub3d->render.img_ptr)
		c3d_window_render(cub3d);
	return (1);
}

void	c3d_window_render(t_param *cub3d)
{
	mlx_put_image_to_window(cub3d->mlx, cub3d->win,
												cub3d->render.img_ptr, 0, 0);
}

/*
** window distance plane is called by cub3d_initialize_struct()
*/

void	c3d_window_distance_plane(t_param *cub3d)
{
	cub3d->window.distance_plane =
	((double)(cub3d->window.width / 2.0) / tan(M_PI / 6.0));
}
