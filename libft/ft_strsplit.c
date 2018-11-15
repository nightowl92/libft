/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:20:20 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/13 19:37:35 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int		ctwords(char const *s, char sep)
{
	int i;
	int w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != sep && (s[i + 1] == sep || !s[i + 1]))
			w++;
		i++;
	}
	return (w);
}

char	**mallomat(char const *s, char sep)
{
	char	**out;
	int		i;
	int		j;
	int		words;
	int		lr;

	i = 0;
	j = 0;
	lr = 1;
	words = ctwords(s, sep);
	if (!(out = (char **)malloc(sizeof(char*) * (ctwords(s, sep) + 1))))
		return (NULL);
	while (i < words)
	{
		while (s[j] != sep)
			j++;
		while (!(s[j + lr] != sep && s[j + lr + 1] == sep))
			lr++;
		if (!(out[i] = (char *)malloc(sizeof(char) * (lr + 1))))
			return (NULL);
		i++;
		j = j + lr;
		lr = 1;
	}
	return (out);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**out;
	int		j;
	int		i;
	int		words;
	int		f;

	i = 0;
	j = 0;
	f = 0;
	out = mallomat(s, c);
	words = ctwords(s, c);
	while (i < words)
	{
		while (s[f] == c)
			f++;
		while (s[f] != c && s[f])
		{
			out[i][j] = s[f];
			j++;
			f++;
		}
		j = 0;
		i++;
	}
	return (out);
}
