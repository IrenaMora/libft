/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 10:48:49 by imora             #+#    #+#             */
/*   Updated: 2021/04/17 10:48:50 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	pos;

	while (c > 256)
		c -= 256;
	pos = 0;
	len = ft_strlen((char *)s);
	while (pos <= len)
	{
		if (*(s + len - pos) == c)
			return ((char *)s + len - pos);
		pos++;
	}
	return (NULL);
}
