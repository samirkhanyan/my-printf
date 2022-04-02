/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:16:21 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/18 16:00:59 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	lenght(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len = 1;
		n *= -1;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*tiv(int n)
{
	int		i;
	int		mod;
	char	*ptr;

	i = 0;
	ptr = malloc(lenght(n) + 1);
	mod = 1;
	if (n < 0)
	{
		mod = -1;
		n = n * -1;
	}
	while (n != 0)
	{
		ptr[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	if (mod == -1)
		ptr[i++] = '-';
	ptr[i] = '\0';
	return (ptr);
}

char	*revnum(char *ptr, int len)
{
	int	i;
	int	b;

	i = 0;
	while (i < len / 2)
	{
		b = *(ptr + i);
		*(ptr + i) = *(ptr + len - 1 - i);
		*(ptr + len - 1 - i) = b;
		i++;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;

	if (n == 0)
	{
		return (ft_strdup("0"));
	}
	else if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	else
	{
		ptr = tiv(n);
		ptr = revnum(ptr, lenght(n));
	}
	return (ptr);
}
