/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:43:05 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/16 12:08:06 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr2;
	const unsigned char	*ptr1;

	i = 0;
	ptr1 = (const unsigned char *)src;
	ptr2 = (unsigned char *)dst;
	if (ptr2 > ptr1)
	{
		while (n != 0)
		{
			n--;
			ptr2[n] = ptr1[n];
		}
	}
	else
	{
		while (i < n)
		{
			ptr2[i] = ptr1[i];
			i++;
		}
	}
	return (dst);
}
