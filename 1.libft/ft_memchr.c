#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			pos;

	if (n == 0)
		return (0);
	str = (unsigned char *)s;
	pos = 0;
	while (pos < n)
	{
		if (str[pos] == (unsigned char)c)
			return ((void *)(str + pos));
		pos++;
	}
	return (0);
}
