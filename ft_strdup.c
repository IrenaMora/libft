#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	long	pos;
	long	str_len;
	char	*str2;

	pos = 0;
	str_len = ft_strlen((char *)s1);
	str2 = malloc(str_len + 1);
	if (str2 == NULL)
		return (NULL);
	while (pos < str_len)
	{
		*(str2 + pos) = *(s1 + pos);
		pos++;
	}
	*(str2 + pos) = '\0';
	return (str2);
}
