#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	pos;
	size_t	len;

	pos = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (pos < (dstsize - 1) && src[pos] != '\0')
	{
		dst[pos] = src[pos];
		pos++;
	}
	dst[pos] = '\0';
	return (len);
}
