#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	pos;

	if (n != 0)
	{
		pos = 0;
		str = (char *)s;
		while (pos < n)
		{
			str[pos] = '\0';
			pos++;
		}
	}
}
