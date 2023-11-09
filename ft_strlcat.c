/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:35:45 by abdmessa          #+#    #+#             */
/*   Updated: 2023/11/07 20:41:23 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

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
