#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*src2;

	src2 = src;
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = src2[i];
		i++;
	}
	return (dst);
}
