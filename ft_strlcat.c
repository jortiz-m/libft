/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:50:09 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/11 13:27:25 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		c;

	i = 0;
	c = 0;

	while (concat[i] != '\0')
	{
		i++;
	}
	i++;
	while (((i + c) < dstsize - 1) && (src[c] != '\0'))
	{
		dst[i + c] = src[c];
		c++;
	}
	dst[i + c] = '\0';
	return (i + c);
}
int main()
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