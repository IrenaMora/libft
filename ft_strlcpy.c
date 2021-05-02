/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:30:19 by imora             #+#    #+#             */
/*   Updated: 2021/04/16 15:30:21 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src,
			size_t dstsize)
{
	size_t	pos;
	long	src_len;

	if ((char *)dst == NULL)
		return (0);
	pos = 0;
	src_len = ft_strlen((char *)src);
	if (dstsize == 0)
		return (src_len);
	while (pos < dstsize - 1)
	{
		if (*((char *)src + pos) == '\0')
			break ;
		((char *)dst)[pos] = ((char *)src)[pos];
		pos++;
	}
	((char *)dst)[pos] = '\0';
	return (src_len);
}
