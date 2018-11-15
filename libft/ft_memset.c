/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:07:18 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/14 16:10:08 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b_;

	i = 0;
	b_ = (unsigned char*)b;
	while (i < len)
	{
		b_[i] = (unsigned char)c;
		i++;
	}
	return (b_);
}
