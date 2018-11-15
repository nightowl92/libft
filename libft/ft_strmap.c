/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:52:06 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/14 15:52:54 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*out;

	i = 0;
	if (!(out = malloc(sizeof(*s) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		out[i] = f(s[i]);
		i++;
	}
	return (out);
}
