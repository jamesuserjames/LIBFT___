#include "Header.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	*dest;
	
	str = (unsigned char *)src;
	i = 0;
	dest = (unsigned char *)dst;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
int	main(void)
{
	char	src[] = "hello";
	char	dst[10];

	ft_memcpy(dst, src, 6);
	printf("%s\n", dst); // Expected: hello
	return (0);
}

/*
DESCRIPTION:
Copy n bytes from src to dst.

RETURN:
Return the original pointer dst.

IMPORTANT:
Copy exactly n bytes.
Do not stop at '\0'.
Source and destination must not overlap.
*/
