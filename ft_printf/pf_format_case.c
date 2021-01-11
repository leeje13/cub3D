/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <jelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 15:48:09 by jelee             #+#    #+#             */
/*   Updated: 2020/06/14 18:09:30 by jelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_format_case(t_fmt *flag)
{
	char	*str;

	if (!flag->is_upper && flag->is_numeric)
	{
		str = flag->print;
		while (*str)
		{
			*str = ft_tolower(*str);
			++str;
		}
	}
}
