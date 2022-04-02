/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:23:05 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/19 13:03:57 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *arr, int ch, size_t n)
{
	const char	*arr2;

	arr2 = arr;
	while (n--)
	{
		if (*arr2 == (char)ch)
			return ((void *)arr2);
		arr2++;
	}
	return (0);
}
