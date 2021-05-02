/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 10:57:21 by imora             #+#    #+#             */
/*   Updated: 2021/04/17 10:57:22 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_equivalent(char *haystack, char *needle, size_t needle_len)
{
	size_t	pos;
	size_t	haystack_len;

	pos = 0;
	haystack_len = ft_strlen((char *)haystack + pos);
	while (pos < needle_len)
	{
		if (*(haystack + pos) != *(needle + pos))
			return (0);
		pos++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;
	size_t	equivalent;
	size_t	needle_len;

	pos = 0;
	equivalent = 0;
	needle_len = ft_strlen((char *)needle);
	if (ft_strlen((char *)haystack) == 0 && needle_len == 0)
		return ("");
	if (needle_len == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (pos < len - needle_len + 1 && *(haystack + pos) != 0)
	{
		if (is_equivalent((char *)haystack + pos, (char *)needle,
				needle_len) == 1)
			return ((char *)haystack + pos);
		pos++;
	}
	return (NULL);
}
