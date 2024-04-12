#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
			return ((unsigned char *)(str + i));
		i++;
	}
	return (NULL);
}
