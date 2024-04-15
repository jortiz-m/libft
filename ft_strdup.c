/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:54:40 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/15 14:06:25 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1len;
	char	*str;
	size_t	i;
	
	s1len = ft_strlen(s1);
	str = (malloc((s1len + 1) * sizeof(char)));
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i]
		i++;
	}
	return(str);
}
