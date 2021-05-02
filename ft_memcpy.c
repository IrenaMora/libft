/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:48:41 by imora             #+#    #+#             */
/*   Updated: 2021/04/16 12:48:41 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src,
			size_t n)
{
	size_t	pos;

	if (dst == NULL && src == NULL)
		return (NULL);
	pos = 0;
	while (pos < n)
	{
		*(char *)(dst + pos) = *(char *)(src + pos);
		pos++;
	}
	return (dst);
}
