/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:44:41 by abdmessa          #+#    #+#             */
/*   Updated: 2023/11/07 20:40:57 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	char	*s1;
	int		i;

	s1 = (char *)s;
	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (s1[i] < n)
	{
		if (s1[i] == c)
			return (&s1[i]);
		i++;
	}
	return (0);
}
