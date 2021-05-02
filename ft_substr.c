#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	real_len;
	size_t	pos;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen((char *)s))
		start = ft_strlen((char *)s);
	pos = 0;
	real_len = 0;
	while (*(s + start + real_len) != 0 && real_len < len)
		real_len++;
	substr = malloc(real_len + 1);
	if (substr == NULL)
		return (NULL);
	while (pos < real_len)
	{
		substr[pos] = s[start + pos];
		pos++;
	}
	substr[pos] = '\0';
	return (substr);
}
