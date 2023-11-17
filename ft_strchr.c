/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:37:09 by abdmessa          #+#    #+#             */
/*   Updated: 2023/11/17 14:23:45 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;
	int		i;

	s1 = (char *)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (&s1[i]);
	i = 0;
	while (s1[i])
	{
		if (s1[i] == (char)c)
			return (&s1[i]);
		i++;
	}
	return (0);
}
