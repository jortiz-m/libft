#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	neg;

	i = 0;
	number = 0;
	neg = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * neg);
}
