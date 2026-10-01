#include "Header.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "abcdef";

	printf("%s\n", (char *)ft_memchr(str, 'd', 6)); // Expected: def
	printf("%p\n", ft_memchr(str, 'x', 6));         // Expected: NULL
	return (0);
}

/*
DESCRIPTION:
Search the first n bytes of memory for c.

RETURN:
Pointer to the first matching byte.
NULL if c is not found.

IMPORTANT:
Search exactly within the first n bytes.
Do not stop at '\0'.
Compare bytes as unsigned char.
*/



