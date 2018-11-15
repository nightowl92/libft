/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:20:59 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/14 15:53:05 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *c;

	if (!(c = malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return (NULL);
	ft_strcpy(c, s1);
	ft_strcat(c, s2);
	return (c);
}
