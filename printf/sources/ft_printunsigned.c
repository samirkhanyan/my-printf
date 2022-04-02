/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptintunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:08:11 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/27 14:00:02 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

static int	len(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	print_to_terminal(char *hex, int size)
{
	while (size--)
		write(1, &hex[size], 1);
}

int	ft_printunsigned(unsigned int n)
{
	char			*tiv;
	unsigned int	index;
	int				count;

	index = 0;
	count = 0;
	tiv = NULL;
	if (n == 0)
	{
		count = 1;
		write(1, "0", 1);
	}
	else
	{
		tiv = malloc(len(n));
		while (n != 0)
		{
			tiv[index] = n % 10 + '0';
			n = n / 10;
			index++;
		}
		print_to_terminal(tiv, index);
	}
	free(tiv);
	return (count + index);
}
