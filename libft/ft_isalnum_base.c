/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 04:37:31 by jelee             #+#    #+#             */
/*   Updated: 2020/02/22 04:56:01 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum_base(char c, int base)
{
	int offset;

	offset = base - 1;
	if (base <= 10)
		return ((c >= '0' && c <= (48 + offset)));
	offset -= 9;
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= (65 + offset)) ||
			(c >= 'a' && c <= (97 + offset)));
}
