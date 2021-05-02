/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 10:31:53 by imora             #+#    #+#             */
/*   Updated: 2021/04/17 10:31:54 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	size_t	pos;

	pos = 0;
	len = ft_strlen((char *)s) + 1;
	while (c > 256)
		c -= 256;
	while (pos < len)
	{
		if (*(s + pos) == c)
			return ((char *)s + pos);
		pos++;
	}
	return (NULL);
}
