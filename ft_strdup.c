/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:48:42 by abdmessa          #+#    #+#             */
/*   Updated: 2023/11/07 21:02:15 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	j = 0;
	s2 = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[j] = s[i];
		i++;
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
