/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:44:18 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/18 16:04:19 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*ptr;

	if (!n && !fd)
		return ;
	ptr = ft_itoa(n);
	ft_putstr_fd(ptr, fd);
	free(ptr);
}
