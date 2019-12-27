#include "libft.h"

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*str1;
	unsigned char		*str2;
	size_t				pos;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	pos = 0;
	while (pos < n)
	{
		if (str1[pos] != str2[pos])
			return (str1[pos] - str2[pos]);
		pos++;
	}
	return (0);
}
