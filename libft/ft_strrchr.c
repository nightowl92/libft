/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 20:11:23 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/15 15:17:42 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_;
	int		i;
	int		len;

	i = 0;
	s_ = (char*)s;
	len = ft_strlen(s);
	while (len)
	{
		if (*(s_ + len - 1) != (char)c)
			return (s_ + len);
		len--;
	}
	return (s_);
}
