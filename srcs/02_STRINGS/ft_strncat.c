#include "Header.h"

char	*ft_strncat(char *dst, const char *src, int n)
{
	int		j;
	int		i;
	
	i = 0;
	j = 0;
	while (dst[j])
		j++;
	while (src[i] && i < n)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (dst);
}

#include <stdio.h>
int	main(void)
{
	char	dst[20] = "Hello ";

	ft_strncat(dst, "World", 3);
	printf("%s\n", dst); // Expected: Hello Wor
	return (0);
}

/*
DESCRIPTION:
Append at most n characters from src to the end of dst.

RETURN:
Return dst.

IMPORTANT:
Always add a final '\0' after the copied characters.
dst must have enough space.
*/
