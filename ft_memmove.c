/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:37:02 by abdmessa          #+#    #+#             */
/*   Updated: 2023/11/07 17:37:04 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	dest2 = (char *)dest;
	src2 = (char *)src;
	i = 0;
	if (!dest && !src)
		return (dest);
	if (dest2 > src2)
	{
		while (n--)
			dest2[n] = src2[n];
	}
	else
	{
		i = 0;
		while (n > 0)
		{
			dest2[i] = src2[i];
			i++;
			n--;
		}
	}
	return (dest);
}
