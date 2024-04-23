/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:36:40 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/23 12:39:48 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s2;
	char	*start;
	char	*finish;

	start = ft_strchr(s1, set, ft_strlen(s1));
	finish = ft_strnstr(s1, set, ft_strlen(s1));
	s2 = malloc(ft_strlen(s1) - ft_strlen(finish) * (sizeof(char)));
	i = 0;
	j = 0;
	if (s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (i < start || i > finish)
		{
			s2[j] = s1[i];
			j++;
		}
		i++;
	}
	return (s2);
}

