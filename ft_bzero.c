#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s2;
	int		i;

	s2 = (char *)s;
	i = 0;
	while (n > 0)
	{
		s2[i] = '\0';
		i++;
		n--;
	}
}
