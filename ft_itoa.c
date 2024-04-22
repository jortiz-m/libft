/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:24:59 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/22 12:21:57 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = (char *)malloc (sizeof(char) * 12);
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[i] = '0';
		i++;
	}
	if (n < 0)
	{
        is_negative = 1;
        n = -n;
	}
	while (n != 0)
	{
        int digit = n % 10;
        str[i++] = '0' + digit;
        n /= 10;
	}
	if (is_negative)
		str[i++] = '-';
    (str[i] = '\0');
    for (int j = 0; j < i / 2; j++)
	{
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
	}
	return (str);
}
