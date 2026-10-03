#include "Header.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		sl;

	sl = 0;
	i = 0;
	while (src[sl])
		sl++;
	if (dstsize == 0)
		return (sl);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sl);
}

#include <stdio.h>
int	main(void)
{
	char	dst[5];
	size_t	result;

	result = ft_strlcpy(dst, "hello", sizeof(dst));
	printf("%s\n", dst);       // Expected: hell
	printf("%zu\n", result);   // Expected: 5
	return (0);
}

/*
DESCRIPTION:
Copy src into dst while respecting dstsize.
If dstsize is greater than 0, dst must end with '\0'.

RETURN:
Return the total length of src.

IMPORTANT:
At most dstsize - 1 characters can be copied.
The return value is the length of src, not the number copied.
Handle dstsize == 0.
*/
