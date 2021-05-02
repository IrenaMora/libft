/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:09:38 by imora             #+#    #+#             */
/*   Updated: 2021/04/16 13:09:39 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
			int c, size_t n)
{
	size_t			pos;
	unsigned char	c2;

	pos = 0;
	c2 = c;
	while (pos < n)
	{
		*(unsigned char *)(dst + pos) = *(unsigned char *)(src + pos);
		if (*(unsigned char *)(src + pos) == c2)
			return (dst + pos + 1);
		pos++;
	}
	return (NULL);
}
