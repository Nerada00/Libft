/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:44:41 by abdmessa          #+#    #+#             */
/*   Updated: 2023/11/15 18:05:55 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	if (!n)
		return (NULL);
	s1 = (unsigned char *)s;
	i = 0;
	while (i <= n)
	{
		if (s1[i] == (unsigned char)c)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
