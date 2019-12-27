#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		pos;

	if (!s || !f)
		return (NULL);
	pos = 0;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[pos])
	{
		str[pos] = f(pos, s[pos]);
		pos++;
	}
	str[pos] = '\0';
	return (str);
}
