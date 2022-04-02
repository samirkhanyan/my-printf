/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:40:17 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/16 18:07:34 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *list, int tar, size_t chap)
{
	unsigned char	*list2;
	size_t			index;

	list2 = list;
	index = 0;
	while (index < chap)
	{
		*list2 = tar;
		index++;
		list2++;
	}
	return (list);
}
