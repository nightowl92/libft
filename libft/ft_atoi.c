/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:30:10 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/14 17:01:12 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_skip(char *c)
{
	int i;

	i = 0;
	while (c[i] == ' ' || c[i] == '\t' || c[i] == '\n'
			|| c[i] == '\v' || c[i] == '\f' || c[i] == '\r')
		i++;
	return (i);
}

int		ft_atoi(const char *str)
{
	int		i;
	int		out;
	int		sign;
	char	*s_;

	s_ = (char*)str;
	sign = 1;
	out = 0;
	i = ft_skip(s_);
	if (s_[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s_[i])
	{
		if (!ft_isdigit(s_[i]))
			return (sign * out);
		out = out * 10 + s_[i] - '0';
		i++;
	}
	return (sign * out);
}
