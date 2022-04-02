/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:53:07 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/11 20:12:59 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	tar;

	if (!c)
		return ((char *)str + ft_strlen(str));
	tar = c;
	while (*str)
	{
		if (*str == tar)
			return ((char *)str);
		else if (!*str++)
			return (0);
	}
	return (0);
}
