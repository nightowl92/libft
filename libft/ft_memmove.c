/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:52:27 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/14 10:12:40 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char		*src_;
	unsigned char			*dst_;
	unsigned char			*tmp;

	src_ = (unsigned char*)src;
	dst_ = (unsigned char*)dst;
	if (!(tmp = (malloc(len))))
		return (NULL);
	ft_memcpy(tmp, src_, len);
	ft_memcpy(dst_, tmp, len);
	return (dst);
}
