/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:22:04 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/14 12:59:36 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*out;
	int		i;

	i = 0;
	if (!(out = (char *)(malloc(sizeof(char) * (ft_strlen(s1) + 1)))))
		return (NULL);
	while (s1[i])
	{
		out[i] = s1[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
