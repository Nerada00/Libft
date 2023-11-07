#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	size_t	j;
	int		i;

	s1 = (char *)s;
	if (!s)
		return (NULL);
	j = ft_strlen(s);
	i = 0;
	if (c == '\0')
		return ((char *)&s[j]);
	i = ft_strlen(s);
	i--;
	while (i >= 0)
	{
		if (s1[i] == (char)c)
			return (&s1[i]);
		i--;
	}
	return (0);
}