/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:06:32 by abdmessa          #+#    #+#             */
/*   Updated: 2023/11/07 21:40:34 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*dest;
	unsigned char	*s1;
	int				i;

	i = 0;
	s1 = (unsigned char *)s;
	dest = malloc(sizeof(unsigned char *) * len);
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = s1[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return ((char *)dest);
}
