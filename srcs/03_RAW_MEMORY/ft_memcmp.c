#include "Header.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)s2;
	str = (unsigned char *)s1;
	while (i < n)
	{
		if (str[i] != s[i])
			return (str[i] - s[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_memcmp("abc", "abc", 3)); // Expected: 0
	printf("%d\n", ft_memcmp("abc", "abd", 3)); // Expected: negative
	printf("%d\n", ft_memcmp("abd", "abc", 3)); // Expected: positive
	return (0);
}

/*
DESCRIPTION:
Compare the first n bytes of two memory areas.

RETURN:
0 if the first n bytes are equal.
Negative if the first different byte in s1 is smaller.
Positive if the first different byte in s1 is greater.

IMPORTANT:
Work with raw memory, not strings.
Do not stop at '\0'.
Compare bytes as unsigned char.
*/
