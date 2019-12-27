#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		pos;
	char		*str;

	if (!s)
		return (0);
	pos = 0;
	if (ft_strlen(s) < start)
		len = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (pos < len && s[start] != '\0')
	{
		str[pos] = s[start];
		pos++;
		start++;
	}
	str[pos] = '\0';
	return (str);
}
