#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;
	size_t	pos2;
	size_t	len2;

	pos = 0;
	len2 = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[pos] && (pos < len))
	{
		pos2 = 0;
		while (haystack[pos + pos2] == needle[pos2] && ((pos + pos2) < len))
		{
			pos2++;
			if (pos2 == len2)
				return ((char *)(haystack + pos));
		}
		pos++;
	}
	return (0);
}
