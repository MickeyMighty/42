#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str_d;
	char		*str_s;
	size_t		pos;

	pos = 0;
	str_d = (char *)dst;
	str_s = (char *)src;
	if (str_d == NULL && str_s == NULL)
		return (NULL);
	while (pos < n)
	{
		str_d[pos] = str_s[pos];
		pos++;
	}
	return (dst);
}
