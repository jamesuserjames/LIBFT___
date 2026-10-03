#include "Header.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		j;
	int		i;
	
	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	dst[20] = "Hello ";

	ft_strcat(dst, "World");
	printf("%s\n", dst); // Expected: Hello World
	return (0);
}

/*
DESCRIPTION:
Append src to the end of dst.

RETURN:
Return dst.

IMPORTANT:
Find the end of dst first.
Copy src after it.
Add the final '\0'.
dst must have enough space.
*/
