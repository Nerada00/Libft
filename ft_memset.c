#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	while (n)
	{
		*s2 = c;
		s2++;
		n--;
	}
	return (s);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void)ac;
	size_t len = 10;
	void	*b;
	void	*d;
	b =  malloc(10000);
	d = malloc(10000);
	ft_memset(b, atoi(av[1]), len);
	printf("b: %d\n", *((int*)b));
	memset(d, atoi(av[1]), len);
	printf("b: %d\n", *((int*)d));
}*/
