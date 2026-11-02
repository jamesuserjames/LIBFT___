#include "Header.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;
	
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

#include <stdio.h>
int	main(void)
{
	char	dst[20];

	ft_strcpy(dst, "hello");
	printf("%s\n", dst); // Expected: hello
	ft_strcpy(dst, "");
	printf("%s\n", dst); // Expected: empty line
	return (0);
}

/*
DESCRIPTION:
Copy src into dst, including the final '\0'.

RETURN:
Return dst.

IMPORTANT:
dst must have enough space for src and the final '\0'.
*/
