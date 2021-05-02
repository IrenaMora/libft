/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:41:03 by imora             #+#    #+#             */
/*   Updated: 2021/04/16 13:41:04 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	pos;

	if (dst == NULL && src == NULL)
		return (NULL);
	pos = 0;
	if (dst < src)
	{
		while (pos < len)
		{
			*(char *)(dst + pos) = *(char *)(src + pos);
			pos++;
		}
	}
	else
	{
		while (len != 0)
		{
			*(char *)(dst + len - 1) = *(char *)(src + len - 1);
			len--;
		}
	}
	return (dst);
}
