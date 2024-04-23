/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:00:55 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/23 11:43:08 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			return ((char *)(str + i));
		i++;
	}
	if (chr == '\0')
		return ((char *)(str + i));
	return (NULL);
}
