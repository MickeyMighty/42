#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*str;
	size_t				pos;

	if (len == 0)
		return (NULL);
	pos = 0;
	str = (unsigned char *)b;
	while (pos < len)
	{
		str[pos] = (unsigned char)c;
		pos++;
	}
	return (b);
}
