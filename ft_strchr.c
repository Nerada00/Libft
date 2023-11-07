#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;
	int		i;

	s1 = (char *)s;
	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (c == '\0')
		return (&s1[i]);
	i = 0;
	while (s1[i])
	{
		if (s1[i] == (char)c)
			return (&s1[i]);
		i++;
	}
	return (0);
}
