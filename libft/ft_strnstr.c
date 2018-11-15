/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:37:39 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/14 17:49:34 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;
	size_t	m;

	i = 0;
	j = 0;
	if (!(n = ft_strlen(haystack)))
		return ((char*)haystack);
	if (!(m = ft_strlen(needle)))
		return ((char*)haystack);
	while (i <= (n - m))
	{
		if (needle[0] == haystack[i])
		{
			while (needle[j] == haystack[i + j] && j < len)
				j++;
			if (j == m)
				return ((char*)haystack + m);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
