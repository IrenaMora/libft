/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:13:17 by imora             #+#    #+#             */
/*   Updated: 2021/04/16 14:13:18 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	pos;

	pos = 0;
	while (c > 256)
		c -= 256;
	while (pos < n)
	{
		if (*(char *)(s + pos) == c)
			return ((char *)s + pos);
		pos++;
	}
	return (NULL);
}
