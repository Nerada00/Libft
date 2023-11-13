/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:35:45 by abdmessa          #+#    #+#             */
/*   Updated: 2023/11/10 14:15:10 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size && dst[i])
		i++;
	j = i + ft_strlen(src);
	dst += i;
	if (size != i)
	{
		while (*src)
		{
			if (size > i + 1)
			{
				*dst++ = *src;
				size--;
			}
			src++;
		}
		*dst = 0;
	}
	return (j);
}
