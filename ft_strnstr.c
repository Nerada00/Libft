/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:07:43 by abdmessa          #+#    #+#             */
/*   Updated: 2023/11/07 20:41:38 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little)
		return (big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((big[i + j]) && (big[i + j] == little[j]) && (i + j < len))
			j++;
		if (!little[j])
			return (big + i);
		i++;
	}
	return (NULL);
}
