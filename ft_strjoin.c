#include "libft.h"
#include <stdlib.h>

static void	set_vars(long *str1_len, long *str2_len,
			char const **str1, char const **str2)
{
	*str1_len = ft_strlen((char *)*str1);
	*str2_len = ft_strlen((char *)*str2);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	long	str1_len;
	long	str2_len;
	char	*str3;
	long	pos;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	set_vars(&str1_len, &str2_len, &s1, &s2);
	str3 = malloc(str1_len + str2_len + 1);
	if (str3 == NULL)
		return (NULL);
	pos = 0;
	while (pos < str1_len)
	{
		str3[pos] = s1[pos];
		pos++;
	}
	pos = 0;
	while (pos < str2_len)
	{
		str3[str1_len + pos] = s2[pos];
		pos++;
	}
	str3[str1_len + pos] = '\0';
	return (str3);
}
