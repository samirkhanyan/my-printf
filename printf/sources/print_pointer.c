/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:50:22 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/27 14:36:11 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

static int	hex_len(unsigned long long int k)
{
	int	len;

	len = 0;
	while (k != 0)
	{
		k = k / 16;
		len++;
	}
	return (len);
}

void	print_to_terminal(char *hex, int i)
{
	write(1, "0x", 2);
	while (i--)
		write(1, &hex[i], 1);
}

char	*get_hex(char *hex, unsigned long long k, int *j)
{
	int	mnacord;
	int	i;

	i = *j;
	hex = malloc(hex_len(k));
	while (k != 0)
	{	
		mnacord = k % 16;
		if (mnacord < 10)
			hex[i] = mnacord + '0';
		else
			hex[i] = 'a' + mnacord - 10;
		k = k / 16;
		i++;
	}
	*j = i;
	print_to_terminal(hex, i);
	return (hex);
}

int	print_pointer(unsigned long long k)
{
	char	*hex;
	int		i;
	int		count;

	count = 2;
	i = 0;
	hex = NULL;
	if (k == 0)
	{
		count += 1;
		write(1, "0x0", 3);
	}
	else
	{
		hex = get_hex(hex, k, &i);
	}
	free(hex);
	return (count + i);
}
