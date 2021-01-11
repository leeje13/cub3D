/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:38:21 by jelee             #+#    #+#             */
/*   Updated: 2020/03/02 19:48:43 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *char_ptr;
	unsigned char		x;

	char_ptr = (const unsigned char *)s;
	x = (unsigned char)c;
	while (n)
	{
		if (*char_ptr == x)
			return ((void *)char_ptr);
		else
			++char_ptr;
		--n;
	}
	return (NULL);
}
