/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:29:16 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/19 12:52:08 by jortiz-m         ###   ########.fr       */
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

	start = strnstr(s1, set, ft_strlen(s1));
	finish = strart + (ft_strlen(set) - 1);
	s2 = malloc(
		ft_strlen(s1) - ft_strlen(finish) * (sizeof(char)));










	

	finish = ft_strchr(s1, *set);
	start = ft_strrchr(s1, set, (ft_strlen(s1)));
	s2 = malloc(ft_strlen(s1) - ft_strlen(finish) * (sizeof(char)));
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (i < start || i > finish)
		{
			s2[j] = s1[i];
			j++;
		}
		i++;
	}
}
int main()
{
	char *s1 = "hola";
	char *set = "o";
	ft_strtrim(s1, set);
	return (0);
}