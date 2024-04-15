/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:38:56 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/15 13:54:09 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	str = (malloc(count * size));
	i = 0;
	while (i < (count * size))
	{
		str[i] = '0';
		i++;
	}
	return (str);
}
