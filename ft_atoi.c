/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:40:00 by imora             #+#    #+#             */
/*   Updated: 2021/04/17 12:40:01 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	res;
	long		pos;
	long		minus;
	long		str_len;

	res = 0;
	pos = 0;
	minus = 1;
	while (str[pos] == ' ' || (str[pos] >= 9 && str[pos] <= 13))
		pos++;
	str_len = ft_strlen((char *)str);
	if (str[pos] == '-' || str[pos] == '+')
		if (str[pos++] == '-')
			minus = -1;
	while (ft_isdigit(str[pos]))
	{
		res = res * 10 + (str[pos++] - '0');
		if (res < 0 && str[0] != '-')
			return (-1);
		else if (res < 0 && str[0] == '-')
			return (0);
	}
	return ((int)res * minus);
}
