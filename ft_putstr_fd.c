#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	long	pos;
	long	str_len;

	if (s == NULL)
		return ;
	pos = 0;
	str_len = ft_strlen(s);
	while (pos < str_len)
	{
		ft_putchar_fd(s[pos], fd);
		pos++;
	}
}
