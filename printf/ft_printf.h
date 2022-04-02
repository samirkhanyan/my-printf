/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:16:36 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/28 20:33:18 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int	print_pointer(unsigned long long k);
int	ft_printunsigned(unsigned int n);
int	printhex(unsigned int n, char format);
int	printstr(char *str);
int	printnumber(int n);
int	ft_printf(const char *format, ...);

#endif
