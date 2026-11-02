#include "Header.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*dest;
	size_t			i;

	i = 0;
	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	if (dest < str)
	{
		while (i < n)
		{
			dest[i] = str[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest[i] = str[i];
		}
	}
	return (dst);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "abcdef";

	ft_memmove(str + 2, str, 4);
	printf("%s\n", str); // Expected: ababcd
	return (0);
}

/*
DESCRIPTION:
Copy len bytes from src to dst.

RETURN:
Return the original pointer dst.

IMPORTANT:
Unlike ft_memcpy, the source and destination may overlap.
The copy must still work correctly when memory overlaps.
Think about which direction the bytes should be copied.
*/
