/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:02:24 by imora             #+#    #+#             */
/*   Updated: 2021/04/16 15:02:25 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos < n)
	{
		if (*(unsigned char *)(s1 + pos) != *(unsigned char *)(s2 + pos))
			return (*(unsigned char *)(s1 + pos)
						- *(unsigned char *)(s2 + pos));
		pos++;
	}
	return (0);
}
