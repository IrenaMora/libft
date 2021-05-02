#include "libft.h"
#include <stdlib.h>
#include <stdbool.h>

static bool	is_contains(char c, char const *set)
{
	long	pos;
	long	len;

	pos = 0;
	len = ft_strlen((char *)set);
	while (pos < len)
	{
		if (set[pos] == c)
			return (true);
		pos++;
	}
	return (false);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	long	pos_start;
	long	pos_stop;
	long	str_len;
	char	*str_trimmed;

	if (s1 == NULL || set == NULL)
		return (NULL);
	str_len = ft_strlen((char *)s1);
	pos_start = 0;
	pos_stop = str_len - 1;
	while (is_contains(s1[pos_start], set) && s1[pos_start] != '\0')
		pos_start++;
	if (str_len == pos_start)
	{
		str_trimmed = malloc(1);
		*str_trimmed = '\0';
		return (str_trimmed);
	}
	while (is_contains(s1[pos_stop], set) && pos_start != pos_stop)
	{
		pos_stop--;
	}
	str_trimmed = ft_substr(s1, pos_start, pos_stop - pos_start + 1);
	return (str_trimmed);
}
