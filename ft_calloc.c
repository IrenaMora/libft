#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*mem;
	unsigned long	pos;

	mem = malloc(count * size);
	if (mem == NULL)
		return (NULL);
	pos = 0;
	while (pos < count * size)
	{
		*(char *)(mem + pos) = 0;
		pos++;
	}
	return (mem);
}
