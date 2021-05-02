/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:55:08 by imora             #+#    #+#             */
/*   Updated: 2021/04/17 09:55:08 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src,
			size_t dstsize)
{
	size_t	dst_pos;
	size_t	src_pos;

	dst_pos = 0;
	src_pos = 0;
	while (*(dst + dst_pos) != '\0' && dst_pos < dstsize)
		dst_pos++;
	while (*(src + src_pos) != '\0' && dst_pos + 1 < dstsize)
	{
		dst[dst_pos] = src[src_pos];
		dst_pos++;
		src_pos++;
	}
	if (dst_pos < dstsize)
		dst[dst_pos] = '\0';
	return (dst_pos + ft_strlen(src + src_pos));
}
