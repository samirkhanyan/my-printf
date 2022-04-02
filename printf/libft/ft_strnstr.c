/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:29:06 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/12 12:55:26 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelen;

	if (!*needle)
		return ((char *)haystack);
	needlelen = ft_strlen(needle);
	while (len)
	{
		if (!*haystack || needlelen > len--)
			return (0);
		if (!ft_strncmp(haystack, needle, needlelen))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
