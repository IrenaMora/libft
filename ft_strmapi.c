#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	pos;
	long			str_len;

	if (s == NULL || f == NULL)
		return (NULL);
	pos = 0;
	str_len = ft_strlen((char *)s);
	str = malloc(str_len + 1);
	if (str == NULL)
		return (NULL);
	while (pos < str_len)
	{
		str[pos] = (*f)(pos, s[pos]);
		pos++;
	}
	str[pos] = '\0';
	return (str);
}
