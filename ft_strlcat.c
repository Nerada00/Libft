size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (i < dstsize && dest[i])
	{
		i++;
	}
	while ((i + j + 1) < dstsize && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
	{
		dest[i + j] = '\0';
	}
	return (dest);
}
