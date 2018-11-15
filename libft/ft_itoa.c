/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:17:30 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/15 16:37:59 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ilen(int nb)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	if (!nb)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		s = 1;
	}
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i + s);
}

char	*ft_itoa(int nb)
{
	char			*c;
	unsigned char	l;
	int				len;
	int				s;

	s = 0;
	len = ilen(nb);
	if (!(c = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	c[len] = '\0';
	if (nb < 0)
	{
		c[0] = '-';
		nb = -nb;
		s = 1;
	}
	while (len - s)
	{
		l = nb % 10 + '0';
		c[len - 1] = l;
		nb /= 10;
		len--;
	}
	return (c);
}
