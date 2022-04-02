/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:02:35 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/16 18:08:43 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *list, size_t chap)
{
	char	*list2;
	size_t	index;

	list2 = list;
	index = 0;
	while (index < chap)
	{
		*list2 = '\0';
		list2++;
		index++;
	}
}
