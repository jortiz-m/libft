/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:11:46 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/23 12:23:27 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == ((unsigned char)c))
			return ((unsigned char *)(str + i));
		i++;
	}
	return (NULL);
}
