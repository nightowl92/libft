/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:42:55 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/14 13:50:18 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*src_;
	unsigned char	*dst_;

	i = 0;
	src_ = (unsigned char*)src;
	dst_ = (unsigned char*)dst;
	while (i < (int)n)
	{
		dst_[i] = src_[i];
		i++;
	}
	return (dst_);
}
