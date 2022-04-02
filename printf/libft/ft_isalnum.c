/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:03:13 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/09 14:37:42 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int n)
{
	if ((n > 64 && n < 91) || (n > 96 && n < 123) || (n > 47 && n < 58))
		return (1);
	else
		return (0);
}