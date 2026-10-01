#include "Header.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while ((i + j < len) && needle[j] == str[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	if (needle[0] == '\0')
		return ((char *)str);
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strnstr("hello world", "world", 11)); // Expected: world
	printf("%s\n", ft_strnstr("abcdef", "cde", 5));         // Expected: cdef
	printf("%p\n", (void *)ft_strnstr("abcdef", "def", 3)); // Expected: NULL
	return (0);
}

/*
DESCRIPTION:
Search for the first occurrence of needle inside haystack,
but search only within the first len characters.

RETURN:
Pointer to the beginning of needle inside haystack.
NULL if needle is not found within len characters.
If needle is empty, return haystack.

IMPORTANT:
Do not search beyond len.
*/
