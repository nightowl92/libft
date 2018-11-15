/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:05:46 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/14 17:56:40 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_;

	i = 0;
	s_ = (unsigned char*)s;
	while (i < n)
	{
		if (s_[i] == (unsigned char)c)
			return (s_ + i);
		i++;
	}
	return (NULL);
}
