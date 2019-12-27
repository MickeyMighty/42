#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		pos;

	pos = ft_strlen(s);
	if (s[pos] == c)
		return ((char*)(s + pos));
	while (pos > 0)
	{
		if (s[pos - 1] == c)
			return ((char*)(s + pos - 1));
		pos--;
	}
	return (0);
}
