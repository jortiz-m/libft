/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:50:09 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/11 13:57:24 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		c;

	i = 0;
	c = 0;
	while (dst[i] != '\0')
		i++;
	if ((dstsize - i) > 0)
	{
		while (i < dstsize)
		{
			dst[i] = src[c];
			i++;
		}
	}
	dst[dstsize] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
int	main()
{
	char		*dst;
	const char 	*src;
	size_t 		dstsize;

	dst = "hola";
	src = "cawita";
	dstsize = 28;

	printf("%i",ft_strlcat(dst, src, dstsize));
	return(0);
}