/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:15:57 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/27 14:01:03 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	printstr(char *str)
{
	int	count;

	if (!str)
	{
		write(1, "(null)", 6);
		count = 6;
	}
	else
	{
		count = ft_strlen(str);
		ft_putstr_fd(str, 1);
	}
	return (count);
}
