/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:29:22 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/12 15:00:59 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	nshan;
	int	kiti;
	int	index;

	nshan = 1;
	kiti = 0;
	index = 0;
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
			index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			nshan = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		kiti = kiti * 10 + (str[index] - '0');
		index++;
	}
	return (kiti * nshan);
}
