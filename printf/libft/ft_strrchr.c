/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:32:39 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/12 16:26:27 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	tar;
	size_t			lenght;

	tar = c;
	lenght = ft_strlen(str) + 1;
	while (lenght)
	{
		if (str[--lenght] == tar)
			return ((char *)str + lenght);
	}
	return (0);
}
