/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:22:47 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/14 17:58:41 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (1);
	return (0);
}

int	ft_isupper(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}
