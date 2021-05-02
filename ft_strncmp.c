/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 11:36:32 by imora             #+#    #+#             */
/*   Updated: 2021/04/17 11:36:33 by imora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos < n)
	{
		if (*(s1 + pos) != *(s2 + pos))
			return ((unsigned char)*(s1 + pos)
				- (unsigned char)*(s2 + pos));
		if (*(s1 + pos) == 0 || *(s2 + pos) == 0)
			break ;
		pos++;
	}
	return (0);
}
