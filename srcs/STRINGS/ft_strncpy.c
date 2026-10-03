#include "Header.h"

char	*ft_strncpy(char *dst, const char *src, int n)
{
	int		i;
	
	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst = '\0';
		i++;
	}
	return (dst);
}

#include <stdio.h>

int	main(void)
{
	char	dst[10];

	ft_strncpy(dst, "abc", 6);
	printf("%s\n", dst); // Expected: abc
	printf("%d %d %d\n", dst[3], dst[4], dst[5]); // Expected: 0 0 0
	return (0);
}