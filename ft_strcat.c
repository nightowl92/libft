/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 19:28:53 by stherkil          #+#    #+#             */
/*   Updated: 2019/01/19 17:37:28 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while (i < len2)
	{
		s1[i + len1] = s2[i];
		i++;
	}
	s1[i + len1] = '\0';
	return (s1);
}
