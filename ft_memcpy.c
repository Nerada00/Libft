/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:34:27 by abdmessa          #+#    #+#             */
/*   Updated: 2023/11/17 14:29:35 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	int		i;

	src2 = (char *)src;
	dest2 = (char *)dest;
	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (n > 0)
	{
		dest2[i] = src2[i];
		i++;
		n--;
	}
	return (dest);
}
