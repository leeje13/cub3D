/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:28:37 by jelee             #+#    #+#             */
/*   Updated: 2020/02/28 18:11:08 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new;
	char *ptr;

	if (!s)
		return (NULL);
	if (!(new = ft_strnew(ft_strlen(s))))
		return (NULL);
	ptr = new;
	while (*s)
	{
		*new = f(new - ptr, *s++);
		++new;
	}
	return (ptr);
}
