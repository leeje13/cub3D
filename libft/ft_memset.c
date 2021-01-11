/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:28:04 by jelee             #+#    #+#             */
/*   Updated: 2020/03/05 14:57:46 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char *end;
	unsigned char x;

	ptr = (unsigned char *)b;
	end = ptr + n;
	x = (unsigned char)c;
	while (ptr < end)
		*ptr++ = x;
	return (b);
}
