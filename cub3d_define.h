/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_define.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 19:34:01 by jelee             #+#    #+#             */
/*   Updated: 2020/10/06 21:39:16 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_DEFINE_H
# define CUB3D_DEFINE_H

/*
** game values
*/
# define MAX_SPRITE			128
# define TILE_SIZE			64

/*
** linux key code
*/
# define KEY_W				119
# define KEY_A				97
# define KEY_S				115
# define KEY_D				100
# define KEY_LEFT			65361
# define KEY_RIGHT			65363
# define KEY_ESC			65307
# define HORIZONTAL			1
# define VERTICAL			2

/*
** rotation
*/
# define COUNTERCLOCKWISE	1
# define CLOCKWISE		   	-1

/*
** https://en.wikipedia.org/wiki/Body_relative_direction
*/
# define FORWARD			1
# define BACKWARD		 	3
# define LEFT				2
# define RIGHT				4

#endif
