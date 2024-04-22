/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:27:34 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/22 12:59:35 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	finish;
	char	*str;

	if (s1 = '\0' || set = '\0')
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	finish = ft_strlen(s1 + start);
	while (ft_strchr(set, s1[start + finish]))
		finish--;
	if (!(str = ft_substr(s1, start, finish + 1)))
		return (NULL);
	return (str);
}
