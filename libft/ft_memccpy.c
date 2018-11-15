/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:29:56 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/14 16:22:50 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src_;
	unsigned char	*dst_;

	i = 0;
	src_ = (unsigned char*)src;
	dst_ = (unsigned char*)dst;
	while (i < n)
	{
		dst_[i] = src_[i];
		if (src_[i] == (unsigned char)c)
			return (dst_ + i + 1);
		i++;
	}
	return (NULL);
}
