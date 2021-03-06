/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signbit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 14:31:16 by jelee             #+#    #+#             */
/*   Updated: 2020/06/14 15:26:08 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** https://git.musl-libc.org/cgit/musl/tree/src/math/__signbit.c
*/

int		ft_signbit(double x)
{
	t_signbit y;

	y.d = x;
	return (y.i >> 63);
}
