/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:28:25 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/27 14:01:34 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	printnumber(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	ft_putnbr_fd(n, 1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
