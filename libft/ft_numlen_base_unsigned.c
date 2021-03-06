/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base_unsigned.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 10:36:15 by jelee             #+#    #+#             */
/*   Updated: 2020/06/20 09:50:08 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen_base_unsigned(unsigned long long int n, size_t base)
{
	if (n >= (unsigned long long int)base)
		return (ft_numlen_base_unsigned(n / base, base) + 1);
	return (1);
}
