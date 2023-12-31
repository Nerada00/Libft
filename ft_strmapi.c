/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:25:57 by abdmessa          #+#    #+#             */
/*   Updated: 2023/11/10 14:25:59 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*cpy;

	if (!s)
		return (ft_strdup(""));
	cpy = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!cpy)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		cpy[j] = (*f)(i, s[i]);
		i++;
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
