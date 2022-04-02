/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:25:57 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/24 13:26:05 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_rowcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	start;
	size_t	finish;

	str = (char **)malloc ((ft_rowcount(s, c) + 1) * 8);
	if (!s || !str)
		return (0);
	i = 0;
	start = 0;
	finish = 0;
	while (i < ft_rowcount(s, c))
	{
		while (s[start] == c)
			start++;
		finish = start;
		while (s[finish] != c && s[finish])
			finish++;
		str[i] = ft_substr(s + start, 0, (finish - start));
		start = finish;
		i++;
	}
	str[i] = 0;
	return (str);
}
