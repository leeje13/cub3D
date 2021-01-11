/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:51:20 by jelee             #+#    #+#             */
/*   Updated: 2020/06/22 13:40:05 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_abs(int n)
{
	return (n < 0 ? -n : n);
}

long double	ft_abs_ld(long double n)
{
	return (n < 0 ? -n : n);
}
