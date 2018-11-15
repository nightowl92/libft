/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:37:39 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/15 13:06:31 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int neelen;
	int haylen;

	i = 0;
	j = 0;
	neelen = ft_strlen(needle);
	haylen = ft_strlen(haystack);
	while (i <= haylen - neelen)
	{
		while (needle[j] == (char)haystack[i + j])
			j++;
		if (j == neelen)
			return ((char*)(haystack + i));
		j = 0;
		i++;
	}
	return (NULL);
}
