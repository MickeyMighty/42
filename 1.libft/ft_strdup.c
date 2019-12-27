#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*str;
	unsigned int	pos;

	pos = 0;
	if (!(str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (pos < ft_strlen(s1))
	{
		str[pos] = s1[pos];
		pos++;
	}
	str[pos] = '\0';
	return (str);
}
