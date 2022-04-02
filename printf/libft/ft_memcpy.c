/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:36:00 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/11 14:23:49 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t chap)
{
	unsigned char			*dest2;
	unsigned const char		*source2;
	size_t					index;

	index = 0;
	dest2 = dest;
	source2 = source;
	while (index < chap)
	{
		*dest2 = *source2;
		dest2++;
		source2++;
		index++;
	}
	return (dest);
}
