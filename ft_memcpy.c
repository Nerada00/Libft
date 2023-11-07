#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	int		i;

	src2 = (char *)src;
	dest2 = (char *)dest;
	i = 0;
	while (n > 0)
	{
		dest2[i] = src2[i];
		i++;
		n--;
	}
	return (dest);
}
