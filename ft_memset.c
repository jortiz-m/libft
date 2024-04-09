/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aleatorio.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:51:28 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/09 14:14:44 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset(void *str, int c, size_t n)
{
	unsigned char *ptr = (unsigned char *)str;
	size_t i;

	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}

	return(str);
}
