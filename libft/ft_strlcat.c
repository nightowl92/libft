/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:43:18 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/15 12:58:03 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t srclen;
	size_t dstlen;

	srclen = ft_strlen(s2);
	dstlen = ft_strnlen(s1, size);
	if (dstlen == size)
		return (size + srclen);
	if (srclen < size - dstlen)
		ft_memcpy(s1 + dstlen, s1, srclen + 1);
	else
	{
		ft_memcpy(s1 + dstlen, s1, size - 1);
		s1[dstlen + size - 1] = '\0';
	}
	return (dstlen + srclen);
}
